import RPi.GPIO as GPIO #Import GPIO libraty
from time import sleep #import time library

GPIO.setmode(GPIO.BCM) #set pin numbering system
yellowLed = 8 #variable holds LED pin number
blueLed = 7
button = 25
GPIO.setup(blueLed, GPIO.OUT)
GPIO.setup(yellowLed, GPIO.OUT) #set the pin as an output or input
GPIO.setup(button, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)


for i in range(10):
	input_state = GPIO.input(button)
	if input_state == True:
		print("button pressed")
		sleep(.4)

GPIO.cleanup()

#for i in range(3):
#	GPIO.output(blueLed, True)
#	sleep(3)
#	GPIO.output(yellowLed, True)
#	sleep(3)
#	GPIO.output(blueLed, False)
#	sleep(3)
#	GPIO.output(yellowLed, False)
#	sleep(3)
