#include <Arduino.h>
#define red 4
#define green 2
#define blue 13
int8_t ledstate=0;
hw_timer_t *timer1=NULL;

void IRAM_ATTR timercall1(){
  ledstate++;
  if(ledstate==1){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}
if(ledstate==2){
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(red,LOW);

}
if(ledstate==3){
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  ledstate=0;
}

}

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

  timer1=timerBegin(0,80,true);
  timerAttachInterrupt(timer1,&timercall1,true);
  timerAlarmWrite(timer1,100000,true);
  timerAlarmEnable(timer1);

  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}

