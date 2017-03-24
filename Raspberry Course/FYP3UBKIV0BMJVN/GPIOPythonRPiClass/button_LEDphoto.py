import RPi.GPIO as GPIO
from time import sleep
import os
import picamera
import pytumblr
from fractions import Fraction

yellowLed = 17
blueLed = 27
button = 18

GPIO.setmode(GPIO.BCM)
GPIO.setup(button, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
GPIO.setup(yellowLed, GPIO.OUT)
GPIO.setup(blueLed, GPIO.OUT)

camera = picamera.PiCamera()
camera.resolution = (640, 480)
camera.brightness = 60
camera.annotate_foreground = picamera.Color(y=0.2, u=0, v=0)

try:
    while True:
        input_state = GPIO.input(button)
        if input_state == True:
            print("button pressed")
            sleep(0.4)
            
            for i in range(3):
                GPIO.output(yellowLed, True)
                sleep(1)
                GPIO.output(yellowLed, False)
                sleep(1)
            for i in range(3):
                GPIO.output(yellowLed, True)
                sleep(.25)
                GPIO.output(yellowLed, False)
                sleep(.25)
                
            camera.start_preview()
            sleep(2)
            camera.capture('testImage.jpg')
            camera.stop_preview()
            camera.close()

            for i in range(3):
                GPIO.output(blueLed, True)
                sleep(3)
                GPIO.output(blueLed, False)
                sleep(3)
           
    GPIO.cleanup()
except KeyboardInterrupt:
    print ("program stopped")
