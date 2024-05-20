#include <Arduino.h>

class Encoder
{
private:
    uint8_t clk_pin;
    uint8_t dt_pin;
    uint8_t sw_pin;
    bool sw_value;
    long value = 0;

public:
    Encoder(const uint8_t clkPin, uint8_t dtPin, uint8_t swPin);
    void setEnValue(long value);
    long getEnValue();
    bool getSwichValue();
    void loop();
    void begin();
    ~Encoder();
};
