#include <Servo.h>
//motor pins
Servo s1;

// const int Xpin = A0;
// const int Ypin = A1;
const int LRpin = A0;
const int UDpin = A1;
const int led1 = A3;
const int led2 = A4;
const int led3 = A5;

int X;
int Y;
int X_nuetral;
int Y_nuetral;
int val;

int UD_neutral;
int UD;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  s1.attach(8);
  // X_nuetral = analogRead(Xpin);
  UD_neutral = analogRead(UDpin);
pinMode(led1,OUTPUT);
  s1.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  // X = analogRead(Xpin);
  // if (X >= X_nuetral) {
  //   int val = map(X, X_nuetral, 1023, 0, 180);
  // }


  // LR = analogRead(LRpin);
  UD = analogRead(UDpin);

  if (UD >= UD_neutral) {
    // B = 0;
    val = map(UD, UD_neutral, 1023, 0, 255);
  } 

if(val>90){
analogWrite(led1,200);
analogWrite(led3,200);

analogWrite(led2,0);

}else{
analogWrite(led2,155);
analogWrite(led1,0);

}


  s1.write(val);
  Serial.println(val);
  // delay(1000);
}
