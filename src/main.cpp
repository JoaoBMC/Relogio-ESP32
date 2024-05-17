#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <AiEsp32RotaryEncoder.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "encoderLib/encoder.h"

#define SCL 22
#define SDA 21

#define BUZZER 5

#define RTC_SLC SCL
#define RTC_SDA SDA

#define OLED_SLC SCL
#define OLED_SDA SDA

#define ENCD_CLK 18
#define ENCD_DT 19
#define ENCD_SW 23

uint timer = 0;

void setup()
{
  Serial.begin(115200);
  Encoder enc(ENCD_CLK, ENCD_DT, ENCD_SW);
}

void encoder_loop()
{
}

void loop()
{
}
