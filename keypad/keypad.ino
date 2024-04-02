#include <Key.h>
#include <Keypad.h>

const byte LED1 = 9;
const byte LED2 = 10;

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] =
{
  {'1', '2', '3','A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#','D'}
};

byte rowPins[ROWS] = { 7, 6, 5, 4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = { 3, 2, 1, 0}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup()
{
Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
} 


void loop()
{
  
  char key = keypad.getKey();

  switch (key)
  {
    case '1':
      Serial.print("button 1");
      digitalWrite(LED1, LOW);
      digitalWrite(12, HIGH);
      delay(1000);
      break;
    
    case '2':
      Serial.print("button 2");
      digitalWrite(LED1, HIGH);
      digitalWrite(12, LOW);
      delay(1000);
      break;
  } 

}