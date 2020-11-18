
#include "HardwareSerial.h" 

#define RXD2 16
#define TXD2 17

const int potPin = 39;// Analog pin

int potValue;// do not change
float voltage =0;// do not change


void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  Serial2.begin (115200, SERIAL_8N1, RXD2, TXD2);
}


void loop() {
  // read the input on analog pin potPin:

  while (Serial2.available()) {
  potValue = analogRead(potPin);
  voltage = (3.3/4095.0) * potValue;
  
  Serial2.print(" Voltage:");
  Serial2.println(voltage);
  Serial2.print("V");

  delay(50);
  
  Serial.print(" Voltage:");
  Serial.println(voltage);
  Serial.print("V"); 

  delay (50);

  }

}
