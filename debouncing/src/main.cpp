#include <Arduino.h>
#define red 4
#define sw1 34
void setup() {
  pinMode(sw1,INPUT);
  pinMode(red,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  
  if(digitalRead(sw1)==0){
  digitalWrite(red,HIGH);
  }
  else
  {
    digitalWrite(red,LOW);
  }
  // put your main code here, to run repeatedly:
}