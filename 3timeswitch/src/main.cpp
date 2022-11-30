#include <Arduino.h>
#define red 4
#define sw1 34
int s1;
int ctr;
//int s1=0;
void setup() {
  pinMode(sw1,INPUT);
  pinMode(red,OUTPUT);

  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  s1=digitalRead(sw1);
  delay(200);
  s1=digitalRead(sw1);
  if(s1==0)
  {
    ctr=ctr+1;
    //digitalWrite(red,LOW);
    //delay(500);
    //digitalWrite(red,HIGH);
    //delay(500);
    Serial.println(ctr);
  }
  
  if(ctr%3==0)
  {
    digitalWrite(red,HIGH);
  }
  if(ctr%6==0)
  {
    digitalWrite(red,LOW);
  }
  
  
  //ctr=s1;
  // put your main code here, to run repeatedly:
}