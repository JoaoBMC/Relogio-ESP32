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
bool btt_status = 0;
bool btt_status_long_press = 0;
int btt_counter = 0;
long valueSW = 0;

Encoder enc(ENCD_CLK, ENCD_DT, ENCD_SW);
void setup()
{
  Serial.begin(115200);
  enc.begin();
}

void encoder_loop()
{
}

void loop()
{
  enc.loop();
  btt_status = enc.getSwichValue();
  // Serial.println(btt_status);

  if (enc.getEnValue() != valueSW)
  {
    valueSW = enc.getEnValue();
    Serial.println(valueSW);
  }
  if (millis() - timer >= 250 && !btt_status)
  {
    btt_counter++;
    timer = millis();
    Serial.println("btt press");
    if (btt_counter >= 4)
    {
      Serial.println("long press");
      btt_status_long_press = 1;
    }
    else
      btt_status_long_press = 0;
  }
  else
  {
    btt_counter = 0;
  }

  delay(10); // this speeds up the simulation
}
