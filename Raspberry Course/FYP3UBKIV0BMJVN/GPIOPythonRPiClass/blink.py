import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode(GPIO.BCM)

yellowLed = 7

GPIO.setup(yellowLed, GPIO.OUT)

while True:
    GPIO.output(yellowLed, True)
    sleep(1)
    GPIO.output(yellowLed, False)
    sleep(1)
    
GPIO.cleanup()
