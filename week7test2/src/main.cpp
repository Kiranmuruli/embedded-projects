#include <Arduino.h>
#define led 4
int ledstate=0;

hw_timer_t *timer=NULL;
void blink1()

{
  ledstate++;
  if(ledstate==1){
   //ledstate=!ledstate;
  digitalWrite(led,LOW);
  //ledstate=0;
  }
  if(ledstate==4)
  {
    digitalWrite(led,HIGH);
    ledstate=0;
  }
}


void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,HIGH);
    timer = timerBegin(0, 80, true);
    timerAttachInterrupt(timer, &blink1, true);
    timerAlarmWrite(timer, 1000000, true);
    timerAlarmEnable(timer);
    
  
  // put your setup code here, to run once:
}

void loop() {
  
    
  // put your main code here, to run repeatedly:
}