#include "DHT.h"
#include <Adafruit_Sensor.h>
#define DHT11PIN 33

DHT dht(DHT11PIN, DHT11);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("ºC ");
  Serial.print("Humidity: ");
  Serial.println(humi);
  delay(2000);
}