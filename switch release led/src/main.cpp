#include <Arduino.h>
#define RED 4
#define switch1 34
int ledstate=0;
int current=1;
int previous=1;
void setup() {
  pinMode(switch1, INPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(RED,LOW);
  // put your setup code here, to run once:
}

void loop() {

  current=digitalRead(switch1);
  if(current!=previous){

    if(current==1){
      ledstate=!ledstate;
      digitalWrite(RED, ledstate);
      previous=current;
    }
    else
    {
      previous=0;
    }

  }
}