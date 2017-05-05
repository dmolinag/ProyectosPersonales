//input pin for the reed switch used to detect the door state
int doorPin = 2;


void setup() {
  //initialize the light as an output and set to LOW (off)
  pinMode(doorPin, INPUT);

  //start the serial line for debugging
  Serial.begin(115200);
  delay(100);

}


void loop(){

  //grab the current door state
  float doorState = analogRead(doorPin);    //LOW is closed HIGH is open

  Serial.println(doorState);
  delay(1000); 
}



