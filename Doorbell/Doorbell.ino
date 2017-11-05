//Doorbell for smart home
const int buttonPin = 11;     // the number of the pushbutton pin
int Buzzer1 = 12;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the piezo as output:
  pinMode(Buzzer1, OUTPUT); 
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // play th Music
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,450,225);
      delay(300);
      tone(Buzzer1,450,225);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,450,200);
      delay(300);
      tone(Buzzer1,600,300);
      delay(300);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,700,300);
      delay(300);
      tone(Buzzer1,700,300);
      delay(500);
      tone(Buzzer1,600,300);
      delay(300);
      tone(Buzzer1,400,200);
      delay(1000);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,650,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,650,200);
      delay(300);
      tone(Buzzer1,650,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(1000);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,600,300);
      delay(500);
      tone(Buzzer1,600,300);
      delay(500);
      tone(Buzzer1,800,300);
      delay(500);
      tone(Buzzer1,800,300);
      delay(500);
      tone(Buzzer1,400,200);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150); 

  }
}

