#include <IRremote.h>
#include <Servo.h>

Servo s1;
#define IR_RECEIVE_PIN 8
#define BTN_1 69
#define BTN_2 70
#define BTN_3 71
#define BTN_4 68
#define BTN_5 64
#define BTN_6 67
#define BTN_7 7
#define BTN_8 21
#define BTN_9 9
#define BTN_0 25
#define BTN_UP 24
#define BTN_DOWN 82
#define BTN_LEFT 8
#define BTN_RIGHT 90
#define BTN_OK 28
int Angle = 0;
int angleArray[] = { 0, 9, 0 };
int angleArrayCurrent = 2;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  s1.attach(9);
  s1.write(Angle);
}
void loop() {
  if (IrReceiver.decode()) {
    IrReceiver.resume();
    Serial.println(IrReceiver.decodedIRData.command);
    // Serial.println(IrReceiver.decodedIRData.decodedRawData);

    int command = IrReceiver.decodedIRData.command;

    switch (command) {
      case BTN_1:
        {
          Serial.println("1 was pressed");
          break;
        }
      case BTN_2:
        {
          Serial.println("2 was pressed");
          break;
        }
      case BTN_3:
        {
          Serial.println("3 was pressed");
          break;
        }
      case BTN_4:
        {
          Serial.println("4 was pressed");
          break;
        }
      case BTN_5:
        {
          Serial.println("5 was pressed");
          break;
        }
      case BTN_6:
        {
          Serial.println("6 was pressed");
          break;
        }
      case BTN_7:
        {
          Serial.println("7 was pressed");
          break;
        }
      case BTN_8:
        {
          Serial.println("8 was pressed");
          break;
        }
      case BTN_9:
        {
          Serial.println("9 was pressed");
          break;
        }
      case BTN_0:
        {
          Serial.println("0 was pressed");
          break;
        }
      case BTN_UP:
        {
          Serial.println("UP was pressed");
          break;
        }
      case BTN_DOWN:
        {
          Serial.println("DOWN was pressed");
          break;
        }
      case BTN_LEFT:
        {
          Angle -= 10;
          s1.write(Angle);
          Serial.println(Angle);
          break;
        }
      case BTN_RIGHT:
        {
          Angle += 10;
          s1.write(Angle);
          Serial.println(Angle);
          break;
        }
      case BTN_OK:
        {
          Angle = angleArray[0] * 100 + angleArray[1] * 10 + angleArray[2];
          Serial.println(Angle);
          s1.write(Angle);
          break;
        }
        // default:
        //   {
        //     Serial.println("No Such key");
        //     break;
        //   }
    }
  }
}