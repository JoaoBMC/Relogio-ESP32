#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <AiEsp32RotaryEncoder.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

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

uint8_t encd_clk_status = 0;
uint8_t encd_orientation = 0;

void setup()
{
  pinMode(INPUT, ENCD_CLK);
  pinMode(INPUT, ENCD_DT);
  pinMode(INPUT, ENCD_SW);

  // attachInterrupt(digitalPinToInterrupt(ENCD_CLK), ISR_encoder, RISING);
  Serial.begin(115200);
}

void loop()
{
}
