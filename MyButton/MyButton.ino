/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPinC = 2;     // the number of the pushbutton pin
const int buttonPinG = 3;
const int speaker1 =  13;      // the number of the LED pin
const int speaker2= 12;

// variables will change:
int buttonStateC = 0;         // variable for reading the pushbutton status
int buttonStateG = 0;

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(9600);
  pinMode(speaker1, OUTPUT);      
  pinMode(speaker2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPinC, INPUT_PULLUP);  //reverse functionality   
  pinMode(buttonPinG, INPUT_PULLUP);
}

void loop(){
  // read the state of the pushbutton value:
  int C = 0;
  int CS = 0;
  int D = 0;
  int DS = 0;
  int E = 0;
  int F = 0;
  int FS = 0;
  int G = 0;
  int GS = 0;
  int A = 0;
  int AS = 0;
  int B = 0;
  buttonStateC = digitalRead(buttonPinC);
  buttonStateG = digitalRead(buttonPinG);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  
  if (buttonStateC == LOW){  //buttonStateC at 2
    Serial.println("tone");    
    tone(speaker1, 262); //speaker1 at 13
  }else{
    noTone(speaker1);
  }
  
  if(buttonStateG == LOW){ // buttonStateG at 3
    tone(speaker2, 392);  //speaker2 12
  }else{
     noTone(speaker2); 
  }
  
}


