#include <Key.h>
#include <Keypad.h>

const byte LED1_RED = 9;
const byte LED1_BLUE = 12;
const byte LED2_RED = 11;
const byte LED2_BLUE = 10;


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
  pinMode(LED1_RED, OUTPUT);
  pinMode(LED2_RED, OUTPUT);
  pinMode(LED1_BLUE, OUTPUT);
  pinMode(LED2_BLUE, OUTPUT);
} 

void loop()
{
  
  char key = keypad.getKey();
  //Serial.print("button ");
  //Serial.print(key);
  switch (key)
  {
    case '1':
      digitalWrite(LED1_RED, HIGH);
      digitalWrite(LED1_BLUE, LOW);
      delay(1000);
      break;
    
    case '2':
      digitalWrite(LED1_BLUE, HIGH);
      digitalWrite(LED1_RED, LOW);
      delay(1000);
      break;

    case '4':
      digitalWrite(LED2_RED, HIGH);
      digitalWrite(LED2_BLUE, LOW);
      delay(1000);
      break;
    
    case '5':
      digitalWrite(LED2_BLUE, HIGH);
      digitalWrite(LED2_RED, LOW);
      delay(1000);
      break;
  } 

}