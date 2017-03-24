const int switchPin = 2;
const int ledPin = 13;

void setup() {
pinMode(switchPin, INPUT);
pinMode(ledPin, OUTPUT);
digitalWrite(switchPin, HIGH);
Serial.begin(9600);
}

void loop() {
if(digitalRead(switchPin) == LOW){
  digitalWrite(ledPin, LOW);
}
else{
  digitalWrite(ledPin, HIGH);
}
Serial.print("Distance");
Serial.println(digitalRead(switchPin));
delay(500);
}
