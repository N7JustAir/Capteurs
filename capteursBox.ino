// INCLUDE
//#include "screen.h"
#include "capteurAirQuality.h"
#include "capteurCO.h"
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>


// DEFINE
#define CE 7
#define CSN 8


// INITIALISATION DES VARIABLES
RF24 radio(CE, CSN);
const byte address[6] = "00001";
struct dataPackage {
  int valueAirQuality;
  int valueCO;
};
dataPackage data;


// CODE PRINCIPAL
void setup() {
  // Initialisation de la liaison série
  Serial.begin(9600);

  // Initialisation de l'émetteur
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}


void loop() {
  // Récupération des valeurs
  data.valueAirQuality = dataAirQuality();
  data.valueCO = dataCO();

  // Envoie des données
  radio.write(&data, sizeof(dataPackage));

  // Pause de 1 seconde
  delay(1000);
}