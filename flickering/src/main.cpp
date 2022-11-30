#include <Arduino.h>
#define red 4
#define p_freq 35
#define p_ch 0
#define p_res 8
int dtc;
void setup() {
  ledcSetup(p_ch,p_freq,p_res);
  ledcAttachPin(red,p_ch);
  // put your setup code here, to run once:
}

void loop() {
  dtc=map(50,0,100,0,255);
  ledcWrite(p_ch,dtc);
  //delay(20);

  // put your main code here, to run repeatedly:
}