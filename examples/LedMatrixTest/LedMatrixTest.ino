#include "LedMatrix.h"
#define LM_CS_PIN 2

#define LM_PRINT_MARTIX_TO_SERIAL (false)

LedMatrix lm(LM_CS_PIN, LM_PRINT_MARTIX_TO_SERIAL);

void setup() 
{
  lm.begin();
}

void loop() 
{
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      lm.setBufferPixel(i, j);
      lm.sendBuffer();      
      lm.clearBufferPixel(i, j);
      delay(200);
    }
  }
}
