#include <Arduino.h>
#define led 4
#define green 2
#define sw1 34
int ledstate=0;
int s1;

hw_timer_t *timer1=NULL;
void blink1()
{
  ledstate=!ledstate;
 if(ledstate){
  digitalWrite(led,HIGH);
  //ledstate=0;
 }
 else
 {
  digitalWrite(led,LOW);
 }
  //ledstate++;
    s1=digitalRead(sw1);
  // ledstate=!ledstate;
 if(s1==LOW){
   
  digitalWrite(green,HIGH);
 }
 if(s1==HIGH)
 {
   digitalWrite(green,LOW);
}
 
}
//   void IRAM_ATTR isr1 ()
//  {
  
 
//  }

void setup() {
  pinMode(sw1,INPUT);
  pinMode(led,OUTPUT);
  pinMode(green,OUTPUT);
   timer1 = timerBegin(0, 80, true);
    timerAttachInterrupt(timer1, &blink1, true);
    timerAlarmWrite(timer1, 1000000, true);
    timerAlarmEnable(timer1);

   
     
  // put your setup code here, to run once:
}

void loop() {

//  s1=digitalRead(sw1);
//     if(s1==LOW){
//    timer1 = timerBegin(0, 80, true);
//     timerAttachInterrupt(timer1, &isr1, true);
//     timerAlarmWrite(timer1, 20000, true);
//     timerAlarmEnable(timer1);
//    s1=HIGH;
// }
  // put your main code here, to run repeatedly:
}