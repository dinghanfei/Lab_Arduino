#include <Arduino.h> 
#include <Wire.h> 
#include <SPI.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp; 
void setup() { 
  Serial.begin(9600); 
  if (!bmp.begin()) { 
    Serial.println("Could not find a valid BMP085 sensor, check wiring!"); 
    while (1) {} 
  } 
}
void loop() { 
  Serial.print("Temperature = "); 
  Serial.print(bmp.readTemperature()); 
  Serial.println(" *C"); 
  Serial.print("Pressure = "); 
  Serial.print(bmp.readPressure()); 
  Serial.println(" Pa"); // 1013.25 millibar = 101325 Pascal 
  Serial.print("Altitude = "); 
  Serial.print(bmp.readAltitude()); 
  Serial.println(" meters"); 
  Serial.print("Pressure at sealevel (calculated) = "); 
  Serial.print(bmp.readSealevelPressure()); 
  Serial.println(" Pa"); // 通过已知海拔标准气压求真实海拔高度 
  Serial.print("Real altitude = "); 
  Serial.print(bmp.readAltitude(101500)); 
  Serial.println(" meters"); 
  Serial.println(); 
  delay(500); 
}