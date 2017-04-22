#include <ESP8266WiFi.h>

const char* ssid = "VE_RD_L2";
const char* password = "X62489003197A3128MNQ";
const char* host = "192.168.3.190"
const int buttonPin = 5;

void setup() {
  // put your setup code here, to run once:
Serial.println();
Serial.println();
Serial.print("Connecting to: ");
Serial.println(ssid);

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.print(".");
}

Serial.println("");
Serial.println("WiFi connected");
Serial.println("IP Address: ");
Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
int reading = digitalRead(buttonPin);

if (reading != lastButtonState){
  lastDebounceTime = millis();
}
if ((millis() - lastDebounceTime) > debounceDelay) {

  if (reading != buttonState){
    buttonState = reading;

    if(buttonState == HIGH) {
      Serial.println(buttonState);
      ringBell();
    }
  }
}

lastButtonState = reading;
}
