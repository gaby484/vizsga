#include <Arduino.h>
#include "DHT.h"

#define DHTPIN 2     // A szenzor a D2-es lábra van kötve
#define DHTTYPE DHT11 // Vagy DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Hiba a szenzor olvasasakor!");
    return;
  }

  Serial.print("Paratartalom: ");
  Serial.print(h);
  Serial.print("%  Homerseklet: ");
  Serial.print(t);
  Serial.println(" C");
  delay(2000);
} 
