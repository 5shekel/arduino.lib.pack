/*
 * MotorTest.ino
 *
 * Based on the library MotorDC Created By Juliבn da Silva Gillig @ RobotGroup.
 * http://robotgroup.com.ar 
 *
 */

#include <MotorDC.h>

MotorDC  m1(6, 8, 1) ;
MotorDC  m2(5, 7, 0);

void setup() {
 m1.setSpeed(100);
 m2.setSpeed(100);
 delay(3000);
 m1.setSpeed(-100);
 m2.setSpeed(-100);
 delay(3000);
 m1.brake();
 m2.brake();
}

void loop() {
}


