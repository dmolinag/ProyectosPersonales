import RPi.GPIO as GPIO
from time import sleep

yellowLed = 17
blueLed = 27
button = 18

GPIO.setmode(GPIO.BCM)

GPIO.setup(yellowLed, GPIO.OUT)
GPIO.setup(blueLed, GPIO.OUT)
GPIO.setup(button, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

while True:
    input_state = GPIO.input(button)
    if input_state == True:
        for i in range(5):
            GPIO.output(yellowLed, True)
            sleep(1)
            GPIO.output(yellowLed, False)
            sleep(1)

        for i in range(5):
            GPIO.output(yellowLed, True)
            sleep(.25)
            GPIO.output(yellowLed, False)
            sleep(.25)

        for i in range(3):
            GPIO.output(blueLed, True)
            sleep(3)
            GPIO.output(blueLed, False)
            sleep(3)
        
GPIO.cleanup()  
