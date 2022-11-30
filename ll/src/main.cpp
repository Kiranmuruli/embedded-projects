#include <Arduino.h>

#define r 4
#define  g 13
#define b  2
void setup() {
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
}
void loop() {
digitalWrite(r,HIGH);
delay(10000);
digitalWrite(g,HIGH);
delay(10000);
}