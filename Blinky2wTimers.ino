#include <TimerOne.h>
const int led = 13;
void setup(void) {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
Timer1.initialize(166667);
Timer1.pwm(led,1023);
}

void loop(void) {
  // put your main code here, to run repeatedly:

}
