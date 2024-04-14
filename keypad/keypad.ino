#include <Key.h>
#include <Keypad.h>

const byte LED1_RED = 12;
const byte LED1_BLUE = 13;
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

char playerSelect = ' ';

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

void activateLED(char button, byte redPin, byte bluePin) {
  Serial.print("button:");
  Serial.println(button);

  if (playerSelect=='A'){
    Serial.print("red");
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  else if (playerSelect=='B') {
    Serial.print("blue");
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
  }
  delay(1000);
}

void loop()
{
  char key = keypad.getKey();
  
  if(key) {
    Serial.print(key);
    //delay(1000);
    
    switch (key)
    {
      case '*':
        Serial.print("button A");
        playerSelect = 'A';
        break; 

      case '#':
        Serial.print("button B");
        playerSelect = 'B';
        break; 

      case '1':
      activateLED('1', LED1_RED, LED1_BLUE);
        break;
      
      case '2':
        activateLED('2', LED2_RED, LED2_BLUE);
        break;

      case '3':
        activateLED('3', LED3_RED, LED3_BLUE);
        break;
      
      case '4':
        activateLED('4', LED4_RED, LED4_BLUE);
        break;

      case '5':
       activateLED('5', LED5_RED, LED5_BLUE);
        break;
      
      case '6':
        activateLED('6', LED6_RED, LED6_BLUE);
        break;
        
      case '7':
        activateLED('7', LED7_RED, LED7_BLUE);
        break;
      
      case '8':
        activateLED('8', LED8_RED, LED8_BLUE);
        break;

      case '9':
        activateLED('9', LED9_RED, LED9_BLUE);
        break;
      
      case '0':
        activateLED('10', LED10_RED, LED10_BLUE);
        break;
    }
  } 

}