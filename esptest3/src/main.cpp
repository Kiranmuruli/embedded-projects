#include <Arduino.h>
#define RED 4
#define switch1 34
int sw1=0;
int sw=0;
void setup() {
  pinMode(switch1, INPUT);
  pinMode(RED, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  sw1=digitalRead(switch1);
  //sw=digitalRead(switch1);
  /*if(sw1==LOW)
  {
    digitalWrite(RED,LOW);
  }*/
  if(sw1==LOW)
  {
    digitalWrite(RED, HIGH);
  
   // digitalWrite(RED, LOW);
  }
  
  
  // put your main code here, to run repeatedly:
}