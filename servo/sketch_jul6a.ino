#include <Servo.h>
Servo sl;
void setup() {
  sl.attach(7);
}

void loop() {
sl.write(0);
// sl.writeMicroseconds(700);
for(int i =0 ; i<=180;i++){
  sl.write(i);
  delay(15);
}
for( int i=180 ; i>=0;i--){
  sl.write(i);
  delay(15);
}
}
