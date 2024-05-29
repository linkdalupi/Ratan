

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  randomSeed(analogRead(0));
  lcd.begin(16, 2);
  // Print a message to the LCD.
  long player1Roll = random(1,7);
  lcd.print("Player 1:" + String(player1Roll)); 

  delay(2000);
  lcd.clear();
  randomSeed(analogRead(1));
  long player2Roll = random(1,7);
  lcd.print("Player 2:" +String(player2Roll));
  delay(2000);
  lcd.clear();

if (player1Roll > player2Roll) {
      lcd.print("Congrats P1!");
      pinMode(4,OUTPUT);
      digitalWrite(4,HIGH);
      delay(3000);
} else if (player1Roll < player2Roll) {
      lcd.print("Congrats P2!");
      pinMode(5,OUTPUT);
      digitalWrite(5,HIGH);
      delay(3000);
} else {
      lcd.print("Draw!");
       pinMode(4,OUTPUT);
      digitalWrite(4,HIGH);
      pinMode(5,OUTPUT);
      digitalWrite(5, HIGH);
      delay(3000);
}
lcd.clear();
pinMode(5,OUTPUT);
      digitalWrite(5, LOW);
pinMode(4,OUTPUT);
      digitalWrite(4, LOW);
}

void loop() {
}

