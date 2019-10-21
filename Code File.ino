

int ledPinRed = 2;  // choose the pin for the LED
int ledPinGreen = 3; // choose the pin for the LED
int buttonPin1 = 7;    // choose the input pin (for a pushbutton)
int buttonPin2 = 9;    // choose the input pin (for a pushbutton)
int buttonState1 = 0;  // variable for reading the pin status
int buttonState2 = 0;  // variable for reading the pin status



// the setup function runs once when you press reset or power the board
void setup() {
 // initialize digital pin LED_BUILTIN as an output.

  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  buttonState1 = digitalRead(buttonPin1);
  if(buttonState1 == HIGH)
  {
    digitalWrite(ledPinRed, HIGH);
      delay(40);
 
   }else {
    digitalWrite(ledPinRed, LOW);  // turn LED OFF
  }

   buttonState2 = digitalRead(buttonPin2);
  if(buttonState2 == HIGH)
  {
    digitalWrite(ledPinGreen, HIGH);
      delay(20);
 
   }else {
    digitalWrite(ledPinGreen, LOW);  // turn LED OFF
  }

}
