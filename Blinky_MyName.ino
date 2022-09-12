//Name: Sakshi Tiwari
//Task 2.1P Nano 33 IoT Programming - First Name Blinky

void setup() 
{
  //Setting BUILTIN_LED as Output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  letterS();
  letterA();
  letterK();
  letterS();
  letterH();
  letterI();
  digitalWrite(LED_BUILTIN, LOW);
}

// The creation of a new morse code function for blinking dots
void dot()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(400);
  digitalWrite(LED_BUILTIN,LOW);
  delay(600);
}

// The creation of a new morse code function for blinking dashes
void dash()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN,LOW);
  delay(600);
}


  //NAME: SAKSHI
  //MORSE CODE: ... .- -.- ... .... ..



void letterA() // LED BLINK FOR LETTER 'A'
{
dot();
dash();
delay(1500);
}

void letterK() // LED BLINK FOR LETTER 'K'
{
dash();
dot();
dash();
delay(1500);
}

void letterS() // LED BLINK FOR LETTER 'S'
{
dot();
dot();
dot();
delay(1500);
}

void letterH() // LED BLINK FOR LETTER 'H'
{
dot();
dot();
dot();
dot();
delay(1500);
}

void letterI() // LED BLINK FOR LETTER 'I'
{
dot();
dot();
delay(2000);  //long delay for ending
}
