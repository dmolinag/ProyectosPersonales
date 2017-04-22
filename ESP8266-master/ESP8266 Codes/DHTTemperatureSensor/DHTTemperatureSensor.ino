#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Bounce2.h>

int DHTPIN = 8;
//LED on ESP8266 GPIO2
const int buttonPin = 2;


#define DHTTYPE DHT11   // DHT 22  (AM2302), AM2321
DHT dht(DHTPIN, DHTTYPE);

//create an instance of the bounce class
Bounce myButton = Bounce();

// Connect pin 2 of the sensor to whatever your DHTPIN is

void setup() {
   Serial.begin (9600);
   //initialize the button pin as an input
   pinMode(buttonPin, INPUT);
   pinMode (DHTPIN, OUTPUT);
   dht.begin();
   myButton.attach(buttonPin);
   myButton.interval(5);
}

void loop() {
  //monitor the button
  checkButton();
  
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

void checkButton(){
   if(myButton.update() && myButton.read() == HIGH){ //update the button and check for HIGH or LOW state
    
    //on false, the light is off so tell it to turn on and set the internal var to true
//    if(isOn == false){
//      client.publish(lightTopic, "1");
//      isOn = true;
//      Serial.print(isOn);
//    }
//
//    //else (on true), the light is on so tell it to turn off and set the internal var to false
//    else{
//      client.publish(lightTopic, "0");
//      isOn = false;
//     Serial.print(isOn);
//    }
  }
}
