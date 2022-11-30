#include <WiFi.h>
#include "time.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 display(-1);

const char *ssid = "MI_X2";
const char *password = "12345678";
const char *ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 19800;
const int daylightOffset_sec = 19800;

void printLocalTime()
{
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo))
  {
    Serial.println("Failed to obtain time");
    return;
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(10, 10);
  display.println(&timeinfo, "%A,%B %d,%y,%H:%M:%S");
  display.display();
  display.startscrollright(0X00, 0X0F);
  
}
void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC, 0X3C);
  display.clearDisplay();
  display.printf("connecting to %s", ssid);
  WiFi.begin(ssid, password);
  while ((WiFi.status() != WL_CONNECTED));
  {
    delay(1000);
    display.print(".");
  }
  display.println("connected");
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
}
void loop()
{
  delay(1000);
  printLocalTime();
}