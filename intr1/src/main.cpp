#include <Arduino.h>
#define led 4
#define green 2
#define sw1 34
int8_t ledstate=0;

void blink(){

  ledstate=!ledstate;
  digitalWrite(led,ledstate);
}
void setup() {
  pinMode(sw1,INPUT);
  pinMode(led,OUTPUT);
  pinMode(green,OUTPUT);
  digitalWrite(led,LOW);
  attachInterrupt(digitalPinToInterrupt(sw1),blink,CHANGE);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(green,HIGH);
 
  // put your main code here, to run repeatedly:
}