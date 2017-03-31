import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BMC)
yellowLed=7
GPIO.setup(yellowLed, GPIO.OUT)
GPIO.output(yellowLed, True)
GPIO.output(yellowLed, False)
GPIO.cleanup()
