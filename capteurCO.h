// INCLUDE
#include <MQ7.h>


// DEFINE
#define AN A1


// INITIALISATION DES VARIABLES
MQ7 capteurCO(AN,5.0);
int CO;


// CODE PRINCIPAL
int dataCO() {
  // Récupération de la donnée
  CO = capteurCO.getPPM();

  // Affichage de la valeur de CO sur la console
  Serial.print("Concentration en monoxyde de carbone : ");
  Serial.print(CO);
  Serial.println(" ppm");

  return CO;
}