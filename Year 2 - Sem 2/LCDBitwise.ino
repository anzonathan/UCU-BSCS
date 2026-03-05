#include <LiquidCrystal.h>

// Initialize the LCD interface pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define the analog pin
const int adcPin = A0;

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  
  // Quick startup message
  lcd.print("ADC Reading:");
}

void loop() {
  // Read the value from the analog pin (0 - 1023)
  int sensorValue = analogRead(adcPin);

  // Set the cursor to the second row (column 0, line 1)
  lcd.setCursor(0, 1);
  
  // Clear the line by printing spaces (prevents "ghost" digits)
  lcd.print("Value:        "); 
  
  // Print the actual value
  lcd.setCursor(7, 1);
  lcd.print(sensorValue);

  // Small delay for readability
  delay(200);
}
