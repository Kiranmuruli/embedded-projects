//#include <Arduino.h>
#include <HardwareSerial.h>
HardwareSerial SerialPort(2);
int led = 2;
void setup()
{
  SerialPort.begin((9600, SERIAL_8E1, 16, 17));
  pinMode(led, OUTPUT);
}

void loop()
{
  if (SerialPort.available())
  {
  char num = SerialPort.read();
  if (num == '0')
  {
    digitalWrite(led, LOW);
  }
  if (num == '1')
  {
    digitalWrite(led, HIGH);
  }
}
}
