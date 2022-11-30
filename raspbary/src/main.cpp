#include <Arduino.h>
#define red 4
#define gre 2
#define blue 13

#define p_freq 5000
#define p_ch1 0
#define p_ch2 1
#define p_ch3 2
#define p_res 8
int8_t dtc,dc;

void setup() {
  ledcSetup(p_ch1,p_freq,p_res);
  ledcSetup(p_ch2,p_freq,p_res);
  ledcSetup(p_ch3,p_freq,p_res);

  ledcAttachPin(red,p_ch1);
  ledcAttachPin(gre,p_ch2);
  ledcAttachPin(blue,p_ch3);
  // put your setup code here, to run once:
}

void loop() {
  
  dtc=map(40,0,100,0,255);
  ledcWrite(p_ch1,dtc);
  //delay(3000);
   dtc=map(89,0,100,0,255);
  ledcWrite(p_ch2,dtc);
  //delay(3000);
   dtc=map(4,0,100,0,255);
  ledcWrite(p_ch3,dtc);
  delay(3000);

  dc=map(100,0,100,0,255);
  ledcWrite(p_ch1,dtc);
  //delay(3000);
   dc=map(100,0,100,0,255);
  ledcWrite(p_ch2,dtc);
  //delay(3000);
   dc=map(100,0,100,0,255);
  ledcWrite(p_ch3,dtc);
  delay(3000);

  dtc=map(100,0,100,0,255);
  ledcWrite(p_ch1,dtc);
  //delay(3000);
   dtc=map(2,0,100,0,255);
  ledcWrite(p_ch2,dtc);
  //delay(3000);
   dtc=map(0,0,100,0,255);
  ledcWrite(p_ch3,dtc);
  delay(3000);

   dtc=map(98,0,100,0,255);
  ledcWrite(p_ch1,dtc);
  //delay(3000);
   dtc=map(0,0,100,0,255);
  ledcWrite(p_ch2,dtc);
  //delay(3000);
   dtc=map(93,0,100,0,255);
  ledcWrite(p_ch3,dtc);
  delay(3000);

   dtc=map(0,0,100,0,255);
  ledcWrite(p_ch1,dtc);
  //delay(3000);
   dtc=map(93,0,100,0,255);
  ledcWrite(p_ch2,dtc);
  //delay(3000);
   dtc=map(93,0,100,0,255);
  ledcWrite(p_ch3,dtc);
  delay(3000);



  // put your main code here, to run repeatedly:
}