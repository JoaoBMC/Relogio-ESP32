#include "encoder.h"

unsigned long runTimer = millis();
const int button_target = 200;

uint8_t encd_clk_status = 0;
uint8_t encd_clk_aux;
Encoder::Encoder(const uint8_t clkPin, uint8_t dtPin, uint8_t swPin)
{
    this->clk_pin = clkPin;
    this->dt_pin = dtPin;
    this->sw_pin = swPin;
}

Encoder::~Encoder()
{
}

void Encoder::setEnValue(long value)
{
    this->value = value;
}
long Encoder::getEnValue()
{
    return value;
}
bool Encoder::getSwichValue()
{
    if (millis() - runTimer >= button_target)
    {

        runTimer = millis();
        return digitalRead(sw_pin);
    }
}
void Encoder::loop()
{
    encd_clk_status = digitalRead(clk_pin);

    if (encd_clk_aux != encd_clk_status && encd_clk_status == HIGH)
    {
        if (digitalRead(dt_pin) == HIGH)
        {
            value--;
        }
        else
            value++;

        Serial.print("TEST: ");
        Serial.println(value);
    }
    encd_clk_aux = digitalRead(clk_pin);
}