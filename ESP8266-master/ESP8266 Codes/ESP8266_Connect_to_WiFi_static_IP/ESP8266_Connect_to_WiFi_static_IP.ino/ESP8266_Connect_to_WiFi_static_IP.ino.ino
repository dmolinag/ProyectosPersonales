
#include "ESP8266WiFi.h"

//WiFi parameters
const char* ssid = "VE_RD_L2";
const char* password = "X62489003197A3128MNQ";

// NETWORK: Static IP details...
IPAddress ip(192, 168, 3, 192);
IPAddress gateway(192, 168, 3, 1);
IPAddress subnet(255, 255, 255, 0);


void setup() {
  // put your setup code here, to run once:
  // Start Serial
  Serial.begin(115200);

  // Static IP Setup Info Here...
WiFi.config(ip, gateway, subnet);

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
      Serial.println(WiFi.hostname());
   
}

void loop() {
  // put your main code here, to run repeatedly:
yield();
}
