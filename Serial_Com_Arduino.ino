
void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  Serial1.begin (115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 while (Serial1.available() > 0 ) { 
   
    Serial.write(Serial1.read());
      
  }
  delay(50);

}
