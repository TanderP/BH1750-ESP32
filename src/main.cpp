#include <Arduino.h>
#include <Wire.h>
#include <BH1750.h>

//I2C
//SCL 22
//SDA 21
BH1750 lightMeter ;

float lux;

void setup() {
Serial.begin(115200);

Wire.begin();
lightMeter.begin();

}

void loop() {
lux = lightMeter.readLightLevel();
Serial.printf("Light: %.2f lx\n", lux);
delay(1000);
}

