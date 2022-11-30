#include <Arduino.h>
#define red 4
#define green 2
#define blue 13
#define sw1 34
#define sw2 35
int ledstate = 0;
hw_timer_t *timer1 = NULL;
void IRAM_ATTR timercall1();
void IRAM_ATTR timercall2();


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);

  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
  int s1 = digitalRead(sw1);
  int s2 = digitalRead(sw2);

  if (s1 == LOW)
  {

    timer1 = timerBegin(0, 80, true);
    timerAttachInterrupt(timer1, &timercall1, true);
    timerAlarmWrite(timer1, 50000, true);
    timerAlarmEnable(timer1);
    s1 = HIGH;
  }
  if (s2 == LOW)
  {

    timer1 = timerBegin(0, 80, true);
    timerAttachInterrupt(timer1, &timercall2, true);
    timerAlarmWrite(timer1, 1000000, true);
    timerAlarmEnable(timer1);
    s2 = HIGH;
  }
}
void IRAM_ATTR timercall1()
{
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
void IRAM_ATTR timercall2()
{
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
