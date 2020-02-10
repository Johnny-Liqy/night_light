int ledGPin = 9 ;
int ledRPin = 10;
int ledBPin = 11;

int pirPin = 7;

void setup() {
  pinMode(ledGPin, OUTPUT);
  pinMode(ledRPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
  
  pinMode(pirPin, INPUT);

  digitalWrite(ledGPin, HIGH);
  digitalWrite(ledRPin, HIGH);
  digitalWrite(ledBPin, HIGH);  
}

void loop() {
  if (digitalRead(pirPin) == HIGH){
    analogWrite(ledGPin,0);
    analogWrite(ledRPin,0);
    analogWrite(ledBPin,0);
  }
  else{
    analogWrite(ledGPin,255);
    analogWrite(ledRPin,255);
    analogWrite(ledBPin,255);
  }
}
