#include <Arduino.h>
#define red 4
#define p_freq 5000
#define p_ch 0
#define p_res 8
uint8_t ui8dc;
void setup() {
  ledcSetup(p_ch,p_freq,p_res);
  ledcAttachPin(red,p_ch);
  // put your setup code here, to run once:
}

void loop() {
  ui8dc=map(0,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(25,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(50,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(75,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(100,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000); 
   ui8dc=map(75,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(50,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(25,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  ui8dc=map(0,0,100,0,255);
  ledcWrite(p_ch,ui8dc);
  delay(1000);
  
  // put your main code here, to run repeatedly:
}