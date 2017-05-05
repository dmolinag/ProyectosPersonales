
#include <DHT.h>


int DHTPIN = 2;

#define DHTTYPE DHT11   // DHT 22  (AM2302), AM2321
DHT dht(DHTPIN, DHTTYPE);


void setup() {
   Serial.begin (9600);
   //initialize the button pin as an input
   pinMode (DHTPIN, INPUT);
   dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity(); 
  float t = dht.readTemperature(); 

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C ");
  delay(2000);
}



