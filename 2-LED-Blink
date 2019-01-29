//Exanded upon "blinkOnPin0" example from PCF8574 library by xreef
//By Jeremy S. Cook

#include "Arduino.h"
#include "PCF8574.h"

PCF8574 pcf8574(0x38); //change to your I2C address

void setup()
{
	Serial.begin(9600);

	// Set pinMode to OUTPUT
	pcf8574.pinMode(P0, OUTPUT);
	pcf8574.pinMode(P1, OUTPUT);
	pcf8574.begin();
}

void loop()
{
	Serial.println("state1");
	pcf8574.digitalWrite(P0, HIGH);
  pcf8574.digitalWrite(P1, LOW);
	delay(250);
  Serial.println("state2");
	pcf8574.digitalWrite(P0, LOW);
  pcf8574.digitalWrite(P1, HIGH);
	delay(250);
}
