#include <stdint.h>

#define LED_MATRIX_LINES_QTY   (8u)
#define LED_MATRIX_LINES_LEN   (8u)

class LedMatrix 
{
  public:               
    LedMatrix(uint8_t cs_pin);

    void begin(void);
    void setArray(uint8_t * array);
    void setIntensity(uint8_t intensity);
    void setBuffer(uint8_t * buffer);
    uint8_t * getBuffer(void);
    void sendBuffer(void);
    void clearBuffer(void);
    void setBufferPixel(uint8_t x, uint8_t y);
    void clearBufferPixel(uint8_t x, uint8_t y);

  private:
    uint8_t cs_pin_;
    uint8_t buffer_[LED_MATRIX_LINES_QTY];
    void send_cmd_(uint8_t address, uint8_t value);
};