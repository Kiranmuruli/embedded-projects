#include <Arduino.h>
#define RED 4
void setup() {
  pinMode(RED, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(RED, HIGH);
  delay(2000);
  digitalWrite(RED, LOW);
  delay(2000);
  // put your main code here, to run repeatedly:
}