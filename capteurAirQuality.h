// INCLUDE
#include <MQ7.h>


// DEFINE
#define AN A0


// INITIALISATION DES VARIABLES
MQ7 capteurAirQuality(AN,5.0);
int airQuality;


// CODE PRINCIPAL
int dataAirQuality() {
  // Récupération de la donnée
  airQuality = capteurAirQuality.getPPM();

  // Affichage de la valeur de la qualité de l'air sur la console
  Serial.print("Qualite de l'air : ");
  Serial.print(airQuality);
  Serial.println(" ppm");

  return airQuality;
}