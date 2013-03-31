
int aa=100;
void setup() {
  // put your setup code here, to run once:
  
    Serial.begin(9600); //bod rat, bits per time/ Serial.begins adds Serial library to code //analog read gets valuve from analog pin S
}

void loop() {
  // put your main code here, to run repeatedly: 
  Serial.println("hello world");
  Serial.println(aa);
}
