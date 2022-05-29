#include "LedMatrix.h"
#define LM_CS_PIN 2

LedMatrix lm(LM_CS_PIN);

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
