#include <Bounce2.h>


// constants won't change. They're used here to
// set pin numbers
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonPin1 = 0;  



//create an instance of the bounce class
Bounce myButton = Bounce();

void setup() {
 
  pinMode(buttonPin,INPUT_PULLUP);
  
  myButton.attach(buttonPin);
  myButton.interval(7);

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:

  myButton.update();

  int buttonPin1 = myButton.read();

  Serial.print (buttonPin1);
  //buttonPin1 = analogRead(myButton);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonPin1 == HIGH) {
    // turn LED on:
    

    digitalWrite(ledPin, buttonState);
    buttonState = !buttonState;
  } else {
     digitalWrite(ledPin, buttonState);
  }
  Serial.println (buttonState);
}
