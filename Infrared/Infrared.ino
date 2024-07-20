#include <IRremote.h>

#define IR_RECEIVE_PIN 8
#define BTN_1  69
#define BTN_2 70
#define BTN_3  71
#define BTN_4  68
#define BTN_5  64
#define BTN_6  67
#define BTN_7  7
#define BTN_8  21
#define BTN_9  9
#define BTN_0  25
#define BTN_UP  24
#define BTN_DOWN  82
#define BTN_LEFT  8
#define BTN_RIGHT  90
#define BTN_OK  28
// #define BTN_ = ;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}
void loop() {
  if (IrReceiver.decode()) {
    IrReceiver.resume();
    // Serial.println(IrReceiver.decodedIRData.command);
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
          Serial.println("LEFT was pressed");
           break;
        } 
      case BTN_RIGHT:
        {
          Serial.println("RIGHT was pressed");
           break;
        } 
      case BTN_OK:
        {
          Serial.println("OK was pressed");
           break;
        } 
      default:
        {
          Serial.println("No Such key");
           break;
        }  
    }
  }
}