#include <LiquidCrystal.h>

#define D87 2
#define D86 3
#define D85 4
#define D84 5
#define E 11
#define RS 12
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void afficheEcran(char ligne1, char ligne2) {
  pinMode(D87, OUTPUT);
  pinMode(D86, OUTPUT);
  pinMode(D85, OUTPUT);
  pinMode(D84, OUTPUT);
  pinMode(E, OUTPUT);

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print(ligne1);
  lcd.setCursor(0, 1);
  lcd.print(ligne2);
  //delay(1000);
}