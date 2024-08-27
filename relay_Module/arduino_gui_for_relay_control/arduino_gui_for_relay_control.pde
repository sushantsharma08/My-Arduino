import controlP5.*; //import ControlP5 library
import processing.serial.*;

Serial port;

ControlP5 cp5; //create ControlP5 object
PFont font;

void setup(){ //same as arduino program

  size(800, 850);    //window size, (width, height)
  
  printArray(Serial.list());   //prints all available serial ports
  
  port = new Serial(this, "/dev/cu.usbmodem2017_2_251", 9600);  //i have connected arduino to com3, it would be different in linux and mac os
  
  //lets add buton to empty window
  
  cp5 = new ControlP5(this);
  font = createFont("calibri light bold", 20);    // custom fonts for buttons and title
  
  cp5.addButton("RELAY1")     //"red" is the name of button
    .setPosition(100, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("RELAY2")     //"yellow" is the name of button
    .setPosition(100, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("RELAY3")     //"blue" is the name of button
    .setPosition(100, 250)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("RELAY4")     //"alloff" is the name of button
    .setPosition(100, 350)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
    cp5.addButton("RELAY5")     //"red" is the name of button
    .setPosition(100, 450)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("RELAY6")     //"yellow" is the name of button
    .setPosition(100, 550)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("RELAY7")     //"blue" is the name of button
    .setPosition(100, 650)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("RELAY8")     //"alloff" is the name of button
    .setPosition(100, 750)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
    cp5.addButton("ALL_OFF")     //"alloff" is the name of button
    .setPosition(400, 450)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
}

void draw(){  //same as loop in arduino

  background(150, 0 , 150); // background color of window (r, g, b) or (0 to 255)
  
  //lets give title to our window
  fill(0, 255, 0);               //text color (r, g, b)
  textFont(font);
  text("LED CONTROL", 80, 30);  // ("text", x coordinate, y coordinat)
}

//lets add some functions to our buttons
//so whe you press any button, it sends perticular char over serial port

void RELAY1(){
  port.write('1');
}

void RELAY2(){
  port.write('2');
}
void RELAY3(){
  port.write('3');
}
void RELAY4(){
  port.write('4');
}
void RELAY5(){
  port.write('5');
}
void RELAY6(){
  port.write('6');
}
void RELAY7(){
  port.write('7');
}
void RELAY8(){
  port.write('8');
}
void ALL_OFF(){
port.write('f');
}
