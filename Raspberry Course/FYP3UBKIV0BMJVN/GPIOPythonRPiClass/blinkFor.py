import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode(GPIO.BCM)

yellowLed = 17

GPIO.setup(yellowLed, GPIO.OUT)

for i in range(5):
    GPIO.output(yellowLed, True)
    sleep(1)
    GPIO.output(yellowLed, False)
    sleep(1)
GPIO.cleanup()


