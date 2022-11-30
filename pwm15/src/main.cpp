#include <Arduino.h>
#define red 4
#define green 2
#define s1 34
#define s2 35
#define s3 36
#define p_freq1 2
#define p_freq2 5
#define ch1 0
#define ch2 1
#define res 8
int dc;
void setup() {
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  ledcSetup(ch1,p_freq1,res);
  ledcSetup(ch2,p_freq2,res);

  ledcAttachPin(red,ch1);
  ledcAttachPin(green,ch2);

  // put your setup code here, to run once:
}

void loop() {
  int sw1=ledcRead(s1);
  int sw2=ledcRead(s2);
  if(sw1==LOW)
  {
    dc=map(100,0,100,0,255);
    ledcWrite(ch1,dc);
    ledcWrite(red,LOW);
  }
  if(sw2==LOW)
  {
    //ledcWrite(green,LOW);
    dc=map(100,0,100,0,255);
    ledcWrite(ch2,dc);
  }
  // put your main code here, to run repeatedly:
}