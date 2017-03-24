int redPin = 2;
int bluePin = 0;


void setup() {
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {

digitalWrite(redPin, HIGH); // turn the red light on
delay(50); // wait 50 ms

digitalWrite(redPin, LOW); // turn the red light off
delay(50); // wait 50 ms

digitalWrite(redPin, HIGH); // turn the red light on
delay(50); // wait 50 ms

digitalWrite(redPin, LOW); // turn the red light off
delay(50); // wait 50 ms

digitalWrite(redPin, HIGH); // turn the red light on
delay(50); // wait 50 ms

digitalWrite(redPin, LOW); // turn the red light off
delay(50); // wait 50 ms

delay(100); // delay midpoint by 100ms

digitalWrite(bluePin, HIGH); // turn the blue light on
delay(50); // wait 50 ms

digitalWrite(bluePin, LOW); // turn the blue light off
delay(50); // wait 50 ms

digitalWrite(bluePin, HIGH); // turn the blue light on
delay(50); // wait 50 ms

digitalWrite(bluePin, LOW); // turn the blue light off
delay(50); // wait 50 ms

digitalWrite(bluePin, HIGH); // turn the blue light on
delay(50); // wait 50 ms

digitalWrite(bluePin, LOW); // turn the blue light off
delay(50); // wait 50 ms


}

