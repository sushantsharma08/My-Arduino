 int ON = LOW;
 int OFF = HIGH;

void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);


  digitalWrite(6,OFF);
  digitalWrite(7,OFF);
  digitalWrite(8,OFF);
  digitalWrite(9,OFF);
  digitalWrite(10,OFF);
  digitalWrite(11,OFF);
  digitalWrite(12,OFF);
  digitalWrite(13,OFF);

 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // digitalWrite(6,ON);
  // delay(1000);
  // digitalWrite(6,OFF);
  // delay(1000);
  // digitalWrite(7,ON);
  // delay(1000);
  // digitalWrite(7,OFF);
  // delay(1000);
  // digitalWrite(8,ON);
  // delay(1000);
  // digitalWrite(8,OFF);
  // delay(1000);
  // digitalWrite(9,ON);
  // delay(1000);
  // digitalWrite(9,OFF);
  // delay(1000);
  // digitalWrite(10,ON);
  // delay(1000);
  // digitalWrite(10,OFF);
  // delay(1000);
  // digitalWrite(11,ON);
  // delay(1000);
  // digitalWrite(11,OFF);
  // delay(1000);
  // digitalWrite(12,ON);
  // delay(1000);
  // digitalWrite(12,OFF);
  // delay(1000);
  // digitalWrite(13,ON);
  // delay(1000);
  // digitalWrite(13,OFF);
  // delay(1000);


 if(Serial.available()){  //id data is available to read

    char val = Serial.read();

    if(val == '1'){       //if r received
      digitalWrite(6, ON); //turn on red led
      }
    if(val == '2'){       //if b received
      digitalWrite(7, ON); //turn on blue led
      }
    if(val == '3'){       //if y received
      digitalWrite(8, ON); //turn on yellow led
      }
      if(val == '4'){       //if r received
      digitalWrite(9, ON); //turn on red led
      }
    if(val == '5'){       //if b received
      digitalWrite(10, ON); //turn on blue led
      }
    if(val == '6'){       //if y received
      digitalWrite(11, ON); //turn on yellow led
      }
      if(val == '7'){       //if r received
      digitalWrite(12, ON); //turn on red led
      }
    if(val == '8'){       //if b received
      digitalWrite(13, ON); //turn on blue led
      }
      
    if(val == 'f'){  
      digitalWrite(6, OFF); //turn off all led
      digitalWrite(7, OFF);
      digitalWrite(8, OFF);
      digitalWrite(9, OFF); //turn off all led
      digitalWrite(10, OFF);
      digitalWrite(11, OFF);     //if f received
      digitalWrite(12, OFF); //turn off all led
      digitalWrite(13, OFF);
      }      
    }
}
