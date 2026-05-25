#define PIN_LED 2
#define PIN_BUTTON 13

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PIN_BUTTON) == LOW){
    digitalWrite(PIN_LED,LOW);
  }else{digitalWrite(PIN_LED,HIGH);
  }
}
