#include <Arduino.h> 
const int LDR_PIN = A0; 
float var; 
void setup() { 
  Serial.begin(9600); 
}
void loop() {
  delay(500); 
  var = analogRead(LDR_PIN); 
  Serial.println(var); 
}