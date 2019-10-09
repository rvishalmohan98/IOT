void setup() {
  
pinMode (13, OUTPUT);
pinMode (7, INPUT);
}
void loop() {
 if (digitalRead(7))
  {
   digitalWrite (13,HIGH);
   delay (500);
    digitalWrite (13,LOW);
  }
}
