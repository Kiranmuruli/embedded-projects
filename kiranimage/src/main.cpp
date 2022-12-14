#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

// create an OLED display object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const unsigned char kiran_icon [] PROGMEM = {
  //'DSC_0215', 128x64px// 'ram', 128x60px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0x3f, 0x3f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf8, 0xe0, 0x3f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf9, 0xcf, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf3, 0x9f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf3, 0x1f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc1, 0xc3, 0x3f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0xc7, 0x3f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x45, 0x3f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x61, 0x9f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x01, 0x9f, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xcf, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0xcf, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x0e, 0x67, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x73, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0e, 0x00, 0x00, 0x00, 0x01, 0x33, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0e, 0x00, 0x00, 0x00, 0x01, 0x33, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0e, 0x00, 0x00, 0x00, 0x00, 0xb9, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x19, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x8f, 0x80, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x8f, 0xe0, 0x00, 0x00, 0x00, 0x8c, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x8e, 0x78, 0x00, 0x00, 0x00, 0x0c, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0c, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x8e, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x18, 0x00, 0x01, 0x80, 0x0e, 0xc7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x02, 0x00, 0x1e, 0x07, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x1c, 0x07, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x02, 0x10, 0x1f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xec, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0x88, 0x00, 0x00, 0x00, 0x3c, 0xe0, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0x88, 0x00, 0x00, 0x00, 0x3d, 0xe0, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0x88, 0x40, 0x00, 0x00, 0x79, 0xf8, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x98, 0x40, 0x00, 0x00, 0xf8, 0xfc, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x9b, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x03, 0xe7, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x01, 0xcf, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf9, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf1, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x08, 0x00, 0x00, 0x3f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0xfc, 0xf7, 0xe0, 0x00, 0x3f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc3, 0xf9, 0xaf, 0xfc, 0x00, 0x3f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xf2, 0xcf, 0xfe, 0x00, 0x0f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x87, 0xed, 0x1f, 0xff, 0x80, 0x07, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0f, 0xd2, 0x03, 0xff, 0xc0, 0x00, 0x3f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x04, 0x40, 0x3f, 0xe0, 0x00, 0x3f
};

void setup() {
  Serial.begin(9600);
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 OLED"));
    while (1);
  }
  delay(2000); 
  oled.setCursor(10, 0);
}

void loop() {
  oled.clearDisplay();

  // display bitmap
  oled.drawBitmap(0, 0, kiran_icon, 128, 64, WHITE);
  oled.display();
  oled.drawBitmap(10, 0, kiran_icon, 128, 64, WHITE);
  oled.display();
  
oled.startscrollright(0x00, 0x0F);
	delay(2000);
   oled.startscrollleft(0x00, 0x0F);
	delay(2000);
}




