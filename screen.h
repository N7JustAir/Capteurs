#include <LiquidCrystal.h>

const int D87 = 2;
const int D86 = 3;
const int D85 = 4;
const int D84 = 5;
const int E = 11;
const int RS = 12;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void hello() {
  Serial.begin(9600);
  pinMode(D87, OUTPUT);
  pinMode(D86, OUTPUT);
  pinMode(D85, OUTPUT);
  pinMode(D84, OUTPUT);
  pinMode(E, OUTPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Bonjour je suis");
  lcd.setCursor(0, 1);
  lcd.print("a votre service");
  delay(1000);
}