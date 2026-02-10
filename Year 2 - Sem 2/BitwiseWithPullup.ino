//Nathaniel Mugenyi B28313

void setup() {
  
  Serial.begin(9600);

  //Output Leds
  
	DDRB |= (1 << 5);
  DDRB |= (1 << 4);
  DDRB |= (1 << 3);
  DDRB |= (1 << 2);
  DDRB |= (1 << 1);

  // Pin 8 INPUT
  DDRB &= ~(1 << 0);
  
  // Pin 8 
  PORTB |= (1 << 0);
}
  


void loop() {
  
  if (!(PINB & (1 << 0))) {
    
    delay(50);

    if (!(PINB & (1 << 0))) {
      
      Serial.println("Debounced Press Detected!");

      // Sequence
          Serial.println("ButtonPressed!");
          PORTB |= (1 << 5);
          delay(5);
          PORTB &= ~(1 << 5);
          delay(100);
          Serial.println("5");
            PORTB |= (1 << 4);
          delay(200);
          PORTB &= ~(1 << 4);
          delay(200);
          Serial.println("4");
            PORTB |= (1 << 3);
          delay(300);
              PORTB &= ~(1 << 3);
          delay(300);
            Serial.println("3");
            PORTB |= (1 << 2);
          delay(400);
              PORTB &= ~(1 << 2);
          delay(400);
            Serial.println("2");
            PORTB |= (1 << 1);
          delay(500);
          PORTB &= ~(1 << 1);
          delay(500);
          Serial.println("1");

      while (!(PINB & (1 << 0))) {
      }
  }

  }

  
}
