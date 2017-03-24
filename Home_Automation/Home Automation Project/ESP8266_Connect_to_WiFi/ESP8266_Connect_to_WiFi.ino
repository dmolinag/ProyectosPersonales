
#include "ESP8266WiFi.h"

//WiFi parameters
const char* ssid = "VE_RD_L2";
const char* password = "X62489003197A3128MNQ";

void setup() {
  // put your setup code here, to run once:
  // Start Serial
  Serial.begin(115200);

  //Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
   
}

void loop() {
  // put your main code here, to run repeatedly:
yield();
}
