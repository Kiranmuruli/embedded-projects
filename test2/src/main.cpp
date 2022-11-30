#include <Arduino.h>
#define RED 4
int ledstate=0;
unsigned long int current;
unsigned long int previous=0;

void setup() {
  pinMode(RED, OUTPUT);
}

void loop() {
  current=millis();
  if(current-previous<=3000){
    ledstate=!ledstate;
   digitalWrite(RED,ledstate);
   previous=current;
  }
  // put your main code here, to run repeatedly:
  if(current-previous<=3000){
    ledstate=ledstate;
   digitalWrite(2,ledstate);
   previous=current;
}

}