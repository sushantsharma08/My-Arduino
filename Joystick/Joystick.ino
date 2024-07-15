const int LRpin = A0;
const int UDpin = A1;

const int clickBtn = 2;
const int Rpin = A2;
const int Gpin = A3;
const int Bpin = A4;
const int Wpin = A5;

// variables for analog readings
int LR;
int UD;
int LR_neutral;
int UD_neutral;

//led bright values via joystick potentiometer
int B, R, G, W;

void setup() {
  // put your setup code here, to run once :
  // Initialize serial communication;
  pinMode(clickBtn, INPUT_PULLUP);
  Serial.begin(9600);
  LR_neutral = analogRead(LRpin);
  UD_neutral = analogRead(UDpin);
}

void loop() {
  // put your main code here, to run repeatedly :
  // read analog pins
  LR = analogRead(LRpin);
  UD = analogRead(UDpin);

  if (UD >= UD_neutral) {
    B = 0;
    R = map(UD, UD_neutral, 1023, 0, 255);
  } else {
    R = 0;
    B = map(UD, UD_neutral, 0, 0, 255);
    // Serial.println(B);
  }

  if (LR >= LR_neutral) {
    W = 0;
    G = map(LR, LR_neutral, 1023, 0, 255);

  } else {
    G = 0;
    W = map(LR, LR_neutral, 0, 0, 255);
  }

  int clickVal = digitalRead(clickBtn);

  if (!clickVal) {
    analogWrite(Rpin, 255);
    analogWrite(Gpin, 255);
    analogWrite(Bpin, 255);
    analogWrite(Wpin, 255);
  }


  analogWrite(Rpin, R);
  analogWrite(Gpin, G);
  analogWrite(Bpin, B);
  analogWrite(Wpin, W);

}