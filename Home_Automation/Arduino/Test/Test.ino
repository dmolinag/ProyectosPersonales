#include "DHT.h"
#include <Adafruit_Sensor.h>

//LED on ESP8266 GPIO2
const int DHTPIN = 2;

dht DHT; // Creats a DHT object

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("DHTxx test!");

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.humidity();
  // Read temperature as Celsius (the default)
  float t = dht.temperature();


   Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");

  
}
