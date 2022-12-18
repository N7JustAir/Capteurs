// DEFINE
#define AN A0


// INITIALISATION DES VARIABLES
int valeur;
int echantillon = 10;
unsigned long somme = 0;
unsigned long moyenne;


// CODE PRINCIPAL
int dataAirQuality() {
  for (int i=0; i<10; i++) {
    valeur = analogRead(AN);        // Conversion AN
    somme = somme + valeur;         // Somme de 10 échantillons
    moyenne = somme / echantillon;  // Calcul de la moyenne de 10 échantillons
    delay(10);
  }
  somme = 0;
  return moyenne;
}