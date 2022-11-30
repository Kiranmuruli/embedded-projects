#include <Arduino.h>
#define switch1 34
#define switch2 35
#define switch3 36
#define switch4 39
#define RED 4
#define GREEN 2
#define BLUE 13
int sw1=0;
int sw2=0;
int sw3=0;
int sw4=0;

void setup() {
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);
  pinMode(switch4, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  
  sw1=digitalRead(switch1);
  if(sw1==LOW){
  digitalWrite(RED, HIGH);
  //digitalWrite(GREEN, LOW);
  //digitalWrite(BLUE, LOW);
  delay(1000);
  }
  sw2=digitalRead(switch2);
  if(sw2==LOW){
  digitalWrite(GREEN, HIGH);
  //digitalWrite(RED, LOW);
  //digitalWrite(BLUE, LOW);
  delay(10000);
  }
  sw3=digitalRead(switch3);
  if(sw3==LOW){
  digitalWrite(BLUE, HIGH);
  //digitalWrite(RED, LOW);
  //digitalWrite(GREEN, LOW);
  }
  delay(1000);
  sw4=digitalRead(switch4);
  if(sw4==LOW){
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);

  }

  // put your main code here, to run repeatedly:
  }