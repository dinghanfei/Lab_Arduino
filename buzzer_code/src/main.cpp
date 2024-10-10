#include <Arduino.h>

int buzzer_pin = 9; 

void setup() { 
  pinMode(buzzer_pin, OUTPUT); 
} 

void loop() { 
  for(int i=0; i<=255; i++){ 
    analogWrite(9, i); 
    delay(50); 
  } 
}