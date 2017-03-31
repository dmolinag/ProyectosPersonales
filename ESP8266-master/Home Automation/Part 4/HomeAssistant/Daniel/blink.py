import RPi.GPIO as GPIO #Import GPIO libraty
from time import sleep #import time library

GPIO.setmode(GPIO.BCM) #set pin numbering system
yellowLed = 8 #variable holds LED pin number
GPIO.setup(yellowLed, GPIO.OUT) #set the pin as an output or input

while True:
	GPIO.output(yellowLed, True)
	sleep(2)
	GPIO.output(yellowLed, False)
	sleep(1)
