// INCLUDE
#include <LiquidCrystal.h>
#include <string.h>


// DEFINE
#define D87 2
#define D86 3
#define D85 4
#define D84 5
#define E 11
#define RS 12
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


// INITIALISATION DES VARIABLES
template <typename T>


// CODE PRINCIPAL
void afficheEcran(T valeur1, int pos1, T valeur2, int pos2) {
  // Convertir les deux valeurs en chaines de caractères
  String ligne1 = String(valeur1);
  String ligne2 = String(valeur2);

  // Initialiser l'écran
  pinMode(D87, OUTPUT);
  pinMode(D86, OUTPUT);
  pinMode(D85, OUTPUT);
  pinMode(D84, OUTPUT);
  pinMode(E, OUTPUT);

  // Nettoyer et afficher les valeurs passées en paramètre sur l'écran
  lcd.clear();
  lcd.begin(16, 2);
  lcd.setCursor(pos1, 0);
  lcd.print(ligne1);
  lcd.setCursor(pos2, 1);
  lcd.print(ligne2);
}