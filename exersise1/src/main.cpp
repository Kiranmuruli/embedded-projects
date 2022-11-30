#include <Arduino.h>
#define LEDR 4
#define LEDG 2

unsigned long previous=0;
unsigned long current;
void setup() {
  pinMode(LEDR,OUTPUT);
  pinMode(LEDG,OUTPUT);
  digitalWrite(LEDR,HIGH);
  digitalWrite(LEDG,LOW);
  // put your setup code here, to run once:
}
void loop() {
  current=millis();
  if(current-previous>=4000){
  digitalWrite(LEDR,LOW);
  //previous=current;
  }
  if(current-previous>=2000){
    digitalWrite(LEDG, HIGH);
  }
  if(current-previous==5000){
    digitalWrite(LEDG,LOW);
  }
  if(current-previous>=7000){
    digitalWrite(LEDR,HIGH);

  }
  previous=current;
}