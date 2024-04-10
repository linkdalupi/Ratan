#include <Key.h>
#include <Keypad.h>

const byte LED1_RED = 13;
const byte LED1_BLUE = 12;
const byte LED2_RED = 11;
const byte LED2_BLUE = 10;
const byte LED3_RED = 54;
const byte LED3_BLUE = 55;
const byte LED4_RED = 56;
const byte LED4_BLUE = 57;
const byte LED5_RED = 59;
const byte LED5_BLUE = 58;

const byte LED6_RED = 61;
const byte LED6_BLUE = 60;
const byte LED7_RED = 67;
const byte LED7_BLUE = 68;
const byte LED8_RED = 62;
const byte LED8_BLUE = 63;
const byte LED9_RED = 64;
const byte LED9_BLUE = 65;
const byte LED10_RED = 69;
const byte LED10_BLUE = 66;


const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] =
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup()
{
  Serial.begin(9600);
  pinMode(LED1_RED, OUTPUT);
  pinMode(LED2_RED, OUTPUT);
  pinMode(LED3_RED, OUTPUT);
  pinMode(LED4_RED, OUTPUT);
  pinMode(LED5_RED, OUTPUT);
  pinMode(LED6_RED, OUTPUT);
  pinMode(LED7_RED, OUTPUT);
  pinMode(LED8_RED, OUTPUT);
  pinMode(LED9_RED, OUTPUT);
  pinMode(LED10_RED, OUTPUT);
  pinMode(LED1_BLUE, OUTPUT);
  pinMode(LED2_BLUE, OUTPUT);
  pinMode(LED3_BLUE, OUTPUT);
  pinMode(LED4_BLUE, OUTPUT);
  pinMode(LED5_BLUE, OUTPUT);
  pinMode(LED6_BLUE, OUTPUT);
  pinMode(LED7_BLUE, OUTPUT);
  pinMode(LED8_BLUE, OUTPUT);
  pinMode(LED9_BLUE, OUTPUT);
  pinMode(LED10_BLUE, OUTPUT);
} 

void loop()
{
  char key = keypad.getKey();
  
  switch (key)
  {
    case '1':
    Serial.print("button 1");
      digitalWrite(LED1_BLUE, HIGH);
      delay(1000);
      break;
    
    case '2':
    Serial.print("button 2");
      digitalWrite(LED2_BLUE, HIGH);
      delay(1000);
      break;

    case '3':
    Serial.print("button 3");
      digitalWrite(LED3_BLUE, HIGH);
      delay(1000);
      break;
    
    case '4':
    Serial.print("button 4");
      digitalWrite(LED4_BLUE, HIGH);
      delay(1000);
      break;

    case '5':
    Serial.print("button 5");
      digitalWrite(LED5_BLUE, HIGH);
      delay(1000);
      break;
    
    case '6':
    Serial.print("button 6");
      digitalWrite(LED6_BLUE, HIGH);
      delay(1000);
      break;
      
    case '7':
    Serial.print("button 7");
      digitalWrite(LED7_BLUE, HIGH);
      delay(1000);
      break;
    
    case '8':
    Serial.print("button 8");
      digitalWrite(LED8_BLUE, HIGH);
      delay(1000);
      break;

    case '9':
    Serial.print("button 9");
      digitalWrite(LED9_BLUE, HIGH);
      delay(1000);
      break;
    
    case '0':
    Serial.print("button 10");
     digitalWrite(LED10_BLUE, HIGH);
      delay(1000);
      break;
  } 

}