#include <DHT.h>
#include <LiquidCrystal.h>
#define sensorType DHT11
#define dataPin 4

DHT dht(dataPin, sensorType);
LiquidCrystal lcd;
float temp, humidity;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  temp = (dht.readTemperature() * 1.8) + 32;
  Serial.print("Temperature: ");
  Serial.println(temp);
  delay(2000);
}

// Celcius to Fahrenheit: (0°C × 1.8) + 32 = 32°F
