#include <Arduino.h>
int RED=4;
int GREEN=2;
int BLUE=13;
void setup() {
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(RED,HIGH);
  delay(1000);
  digitalWrite(RED,LOW);
  delay(1000);
   digitalWrite(GREEN,HIGH);
  delay(1000);
  digitalWrite(GREEN,LOW);
  delay(1000);
   digitalWrite(BLUE,HIGH);
  delay(1000);
  digitalWrite(BLUE,LOW);
  delay(1000);




  // put your main code here, to run repeatedly:
}