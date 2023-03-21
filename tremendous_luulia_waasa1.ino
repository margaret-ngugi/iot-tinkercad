// C++ code
//
#include <Servo.h>

Servo servo_0;

Servo servo_5;

void setup()
{
  servo_0.attach(0);

  servo_5.attach(5, 500, 2500);

  if (servo_0.read() < 30) {
    servo_5.write(90);
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}