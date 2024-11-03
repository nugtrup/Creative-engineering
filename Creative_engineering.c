//Abot 춤추는 코드
#include <Servo.h>

Servo L;
Servo R; 

void setup() {
  L.attach(13); 
  R.attach(12);
  for(int i = 0; i < 2; i++){
    for (int i = 0; i < 4; i++) {
      L.writeMicroseconds(1700);
      R.writeMicroseconds(1700);
      delay(300);

      L.writeMicroseconds(1300);
      R.writeMicroseconds(1300);
      delay(300); 
    }

    L.writeMicroseconds(1700);
    R.writeMicroseconds(1500); 
    delay(500);
    L.writeMicroseconds(1300);
    R.writeMicroseconds(1700);
    delay(800); 

    L.writeMicroseconds(1500); 
    R.writeMicroseconds(1300);
    delay(600); 
    L.writeMicroseconds(1500);
    R.writeMicroseconds(1500);
    delay(300);

    for (int i = 0; i < 3; i++) {
      L.writeMicroseconds(1700);
      R.writeMicroseconds(1500); 
      delay(400); 
    }

    L.writeMicroseconds(1700);
    R.writeMicroseconds(1300);
    delay(500); 
    L.writeMicroseconds(1300);
    R.writeMicroseconds(1700);
    delay(700); 
    L.writeMicroseconds(1500); 
    R.writeMicroseconds(1500);
    delay(400);

    L.writeMicroseconds(1700);
    R.writeMicroseconds(1700);
    delay(600);
    L.writeMicroseconds(1500);
    R.writeMicroseconds(1500);
  }
  L.detach();
  R.detach();
}

void loop() {}

