#include <Arduino.h>
#define pot 32
#define led 2
int thresholdvoltage=2.3;
void setup() {
pinMode(led, OUTPUT);
Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  analogReadResolution(12);
  int a=analogRead(pot);
  Serial.println(a);
  delay(600);

  if(a>thresholdvoltage)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  // put your main code here, to run repeatedly:
}