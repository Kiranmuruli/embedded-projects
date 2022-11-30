#include <Arduino.h>
#define pot 32
#define red 4
#define green 2
#define blue 13
#define sw1 34
#define sw2 35

//uint8_t potvalue=0;
void setup() {
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:
}

void loop() {
  analogReadResolution(12);

  int p=Serial.println(analogRead(pot));
  delay(100);
  if(p==0)
  {
 digitalWrite(red,HIGH);
  }
  if(p==4095)
  {
    digitalWrite(red,LOW);
  }

//   int s1=digitalRead(sw1);
//   if(s1==0)
// {
//   analogWrite(red,p);
//   delay(1000);
//   digitalWrite(red,LOW);
//   delay(1000);
// }
  // put your main code here, to run repeatedly:
}
