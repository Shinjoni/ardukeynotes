
  
  int speakerPin = 13;
  int numTones = 10;
  int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
void setup(){
  // put your setup code here
  /*for(int i = 0; i<numTones; i++){
    tone(speakerPin, tones[i]);
    delay(500);
  } 
  noTone(speakerPin); 
  */
}

void loop() {
   //put your main code here, to run repeatedly: 
  tone(speakerPin, tones[0]);
  delay(300);
  noTone(speakerPin);
  delay(200);
}
