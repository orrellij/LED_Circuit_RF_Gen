const int PIN_16 = 22;
const int PIN_8 = 23;
const int PIN_15 = 24;
const int BUTTON_IN = 25; // This input signal should be coming from Barbara's button side of the project
bool button_Pressed;




void setup() {
pinMode(22, OUTPUT);
pinMode(23, OUTPUT);
pinMode(24, OUTPUT);
pinMode(25, INPUT);
}

void loop() {
// check if button was pressed
// if pressed:
  // pin 16 and 8 go high
  // pin 15 pulse high for x amount of microseconds
  // then pin 15 low, repeat until button is pressed again

if (digitalRead(BUTTON_IN) == HIGH){
  button_Pressed = true;
}
else if (digitalRead(BUTTON_IN) == LOW){
  button_Pressed = false;
}
if (button_Pressed){
  digitalWrite(PIN_16, HIGH);
  digitalWrite(PIN_8, HIGH);
  digitalWrite(PIN_15, HIGH);
  delayMicroseconds(500);
  digitalWrite(PIN_15, LOW);
}
else if (button_Pressed == false){
  digitalWrite(PIN_16, LOW);
  digitalWrite(PIN_8, LOW);
  digitalWrite(PIN_15, LOW);
}
}
