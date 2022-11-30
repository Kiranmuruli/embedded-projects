#include <Arduino.h>
#define red 4
#define relay 25
int relaystate=0;
void setup() {
  pinMode(relay,OUTPUT);
  pinMode(red,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(relay,HIGH);
  digitalWrite(red,LOW);
  delay(1000);
  digitalWrite(relay,LOW);
  digitalWrite(red,HIGH);
delay(1000);
//   if(digitalRead(relay)==LOW)
//   {
    
//     digitalWrite(red,HIGH);
//     delay(1000);
//   }
//   if(digitalRead(relay)==HIGH)
//   {
//     digitalWrite(red,LOW);
//     delay(1000);
//   }
  
  
  
//   // put your main code here, to run repeatedly: 
}