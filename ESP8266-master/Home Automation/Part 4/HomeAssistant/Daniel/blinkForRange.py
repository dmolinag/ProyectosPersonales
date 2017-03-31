import RPi.GPIO as GPIO #import GPIO library
from time import sleep #import time module
GPIO.setmode(GPIO.BCM) #set pin numbering system

yellowLed = 7 #put pin connected to the yellow LED in variable

GPIO.setup(yellowLed, GPIO.OUT) #set the LED pin as output

#iterate through list held in blinkTimes variable
for i in range(5):
	#blink LED
	GPIO.output(yellowLed, True)
	sleep(2)
	GPIO.output(yellowLed, False)
	sleep(1)
