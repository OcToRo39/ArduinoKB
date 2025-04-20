const int buttonPinW = 8; // W key, make sure it matches on ur arduino board!!
const int buttonPinA = 9; // A key, make sure it matches on ur arduino board!!
const int buttonPinS = 10; // S key, make sure it matches on ur arduino board!!
const int buttonPinD = 11; // D key, make sure it matches on ur arduino board!!

bool lastButtonStateW = HIGH;
bool lastButtonStateA = HIGH;
bool lastButtonStateS = HIGH;
bool lastButtonStateD = HIGH; 




void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPinW, INPUT_PULLUP); 
  pinMode(buttonPinA, INPUT_PULLUP);
  pinMode(buttonPinS, INPUT_PULLUP);
  pinMode(buttonPinD, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool buttonStateW = digitalRead(buttonPinW);
  bool buttonStateA = digitalRead(buttonPinA);
  bool buttonStateS = digitalRead(buttonPinS);
  bool buttonStateD = digitalRead(buttonPinD);

  if (buttonStateW == LOW && lastButtonStateW == HIGH) {
    Serial.println("W");
    delay(100); 
  }

  
  if (buttonStateA == LOW && lastButtonStateA == HIGH) {
    Serial.println("A");
    delay(100); 
  }

  
  if (buttonStateS == LOW && lastButtonStateS == HIGH) {
    Serial.println("S");
    delay(100); 
  }

  
  if (buttonStateD == LOW && lastButtonStateD == HIGH) {
    Serial.println("D");
    delay(100); 
  }

  
  lastButtonStateW = buttonStateW;
  lastButtonStateA = buttonStateA;
  lastButtonStateS = buttonStateS;
  lastButtonStateD = buttonStateD;
}
