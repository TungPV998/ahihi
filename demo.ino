#line 2 "sketch.ino"
#include <ArduinoUnit.h>

test(ok) 
{
  int x=3;
  int y=4
    ;
  assertEqual(x,y);
}

test(bad)
{
  int x=3;
  int y=456;
  assertNotEqual(x,y);
}

void setup()
{
  Serial.begin(9600);
  while(!Serial) {} // Portability for Leonardo/Micro
}

void loop()
{
  Test::run();
}
