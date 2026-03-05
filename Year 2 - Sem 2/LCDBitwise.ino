#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  int rawValue = analogRead(A0);

  // Example 1: Bitwise AND (&) to check if the value is ODD or EVEN
  // 0x01 is binary 00000001. If the last bit is 1, it's odd.
  bool isOdd = rawValue & 0x01;

  // Example 2: Bitwise Masking
  // Let's say we only care about the lower 8 bits (0-255)
  int lowerByte = rawValue & 0xFF; 

  lcd.setCursor(0, 0);
  lcd.print("Raw: ");
  lcd.print(rawValue);
  
  lcd.setCursor(0, 1);
  if(isOdd) {
    lcd.print("Odd  ");
  } else {
    lcd.print("Even ");
  }
  
  lcd.print("Low8: ");
  lcd.print(lowerByte);

  delay(500);
}
