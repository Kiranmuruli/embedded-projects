#include <Arduino.h>
#define red 4
#define green 2
#define blue 13
#define sw1 34
#define sw2 35
#define sw3 36
int8_t ledstate=0;

void blink1(){

  ledstate=!ledstate;
  digitalWrite(red,ledstate);
}
void blink2(){
  ledstate=!ledstate;
  digitalWrite(red,ledstate);
  digitalWrite(green,ledstate);
}
void blink3(){
  ledstate=!ledstate;
    digitalWrite(red,ledstate);
  digitalWrite(green,ledstate);
  digitalWrite(blue,ledstate);
}
  

void setup() {
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  digitalWrite(red,LOW);

  attachInterrupt(digitalPinToInterrupt(sw1),blink1,RISING);
  attachInterrupt(digitalPinToInterrupt(sw2),blink2,FALLING);
  attachInterrupt(digitalPinToInterrupt(sw3),blink3,CHANGE);
  // put your setup code here, to run once:
}

void loop() {
  //digitalWrite(green,HIGH);
  //digitalWrite(blue,HIGH);
  //digitalWrite(red,HIGH);
 
  // put your main code here, to run repeatedly:
}