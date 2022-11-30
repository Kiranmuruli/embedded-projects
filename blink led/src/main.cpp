#include <Arduino.h>
#define r 4
#define g 2
#define  sw 34
void setup() {
 pinMode(r,OUTPUT);
 pinMode(g,OUTPUT);
 //pinMode(34,INPUT);
}

void loop() {
  digitalWrite(r,HIGH);
  delay(1000);
 digitalWrite(g,HIGH);
 delay(1000);
 digitalWrite(g,LOW);
 delay(1000);
}

