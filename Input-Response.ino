//when input P0 is high, input P1 (LED etc) turns on in response.
//Includes serial output
//Original code found here https://create.arduino.cc/projecthub/tarantula3/pcf8574-gpio-extender-with-arduino-and-nodemcu-a8cb00
//Modified by Jeremy S. Cook 1/30/2019

#include "Arduino.h"
#include "PCF8574.h"

// Set i2c HEX address
PCF8574 pcf8574(0x38);
unsigned long timeElapsed;

void setup(){
  Serial.begin(9600);

  pcf8574.pinMode(P0, INPUT);
  pcf8574.pinMode(P1, OUTPUT);

  pcf8574.begin();
}

void loop(){
  uint8_t val = pcf8574.digitalRead(P0);            // Read the value of pin P0        
  if (val == HIGH){  
    pcf8574.digitalWrite(P1, HIGH); // If Button is Pressed
    Serial.println("Button Pressed");
  }
  else {
    pcf8574.digitalWrite(P1, LOW);  // When Button is Released
    Serial.println("Button Not Pressed");
  }
  
  delay(50);
}
