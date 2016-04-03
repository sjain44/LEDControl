/* LED Blink, Teensyduino Tutorial #1
   http://www.pjrc.com/teensy/tutorial.html
 
   This example code is in the public domain.
*/

// Teensy 2.0 has the LED on pin 11
// Teensy++ 2.0 has the LED on pin 6
// Teensy 3.0 has the LED on pin 13
const int ledPin = 13, ledPin2 = 14, ledPin3 = 15;
const double n = 0, dc = 10, del = 0;
int f = 1;
// the setup() method runs once, when the sketch starts

void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  //digitalWrite(ledPin, HIGH);   // set the BLUE LED on
  //digitalWrite(ledPin2, HIGH);   // set the GREEN LED on
  //digitalWrite(ledPin3, HIGH);  // set the RED LED on
  //delayMicroseconds((dc/(100*f))*1000000);                  // wait for a second
  //digitalWrite(ledPin, LOW);    // set the LED off
  //digitalWrite(ledPin2, LOW);    // set the LED off
  //digitalWrite(ledPin3, LOW);
  //delayMicroseconds((1-(dc/100))*(1/f)*1000000);                  // wait for a second 
  
}

