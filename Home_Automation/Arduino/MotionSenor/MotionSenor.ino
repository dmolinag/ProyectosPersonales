//Pins
const int led_pin = 13;
const int motion_pin = 7;

//Alarm
boolean alarm_mode = false;

//Variables for the flashing LED
int ledState = LOW;
long previousMillis = 0;
long interval = 100;  //Interval at wich to blinkk

void setup() {
  //Set pins to output
  pinMode(led_pin, OUTPUT);

  //Wait before starting the alarm
  delay(1000);

  
}

void loop() {
  //Motion detected?
  if (digitalRead(motion_pin)){
    alarm_mode = true;
  }

  //If alarm mode is on, flash the led
  if (alarm_mode){
    unsigned long currentMillis = millis();
    if(currentMillis - previousMillis > interval){
      previousMillis = currentMillis;
      if (ledState == LOW)
      ledState = HIGH;
      else
      ledState = LOW;
     //Switch the LED
     digitalWrite(led_pin, ledState);
    }
  }
}
