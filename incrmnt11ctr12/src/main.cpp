#include <Arduino.h>
#define red 4
#define sw1 34
int s1;
int ctr;

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
    digitalWrite(red,LOW);
    delay(500);
    digitalWrite(red,HIGH);
    delay(500);
    Serial.println(ctr);
  }
}