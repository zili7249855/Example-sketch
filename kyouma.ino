#include <Servo.h>

Servo Kyouma;

void setup()
{
  Kyouma.attach(5); 
}

void loop()
{
  
  for( int angle=0;angle< 180 ; angle++)
  {
    Kyouma.write(angle);
    delay(10);
  }
  
}
