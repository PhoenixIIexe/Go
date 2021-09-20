#include "Arduino.h"
#include "go.h"

void go (int m1, int m2)
{
  digitalWrite(4, m1 >= 0 ? 1 : 0);
  analogWrite(5, m1 < 255 ? abs(m1) : 255);
  digitalWrite(7, m2 >= 0 ? 1 : 0);
  analogWrite(6, m2 < 255 ? abs(m2) : 255);
}
