#include <Arduino.h>
#define led 4
int current;
int previous=0;
int ledstate=0;
void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  // put your setup code here, to run once:
}

void loop() {
  current=millis();
  if(current-previous>=3000)
  {
    ledstate=!ledstate;
    digitalWrite(led,ledstate);
    previous=current;
  }
  // put your main code here, to run repeatedly:
}