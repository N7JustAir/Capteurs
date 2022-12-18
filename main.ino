// INCLUDE
#include "screen.h"
#include "AirQuality.h"


// DEFINE


// INITIALISATION DES VARIABLES
int v;


// CODE PRINCIPAL
void setup() {
  Serial.begin(9600);   // Initialisation de la liaison série
}


void loop() {
  v = dataAirQuality();
  Serial.println(v);
  if (v > 250) {
    Serial.println("La qualite de l air est mediocre");
    afficheEcran("air est mediocre", (char) v);
  } else {
    Serial.println("La qualite de l air est bonne");
  }
  delay(1000);
}