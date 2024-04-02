const int RED_PIN = 22;
const int BLUE_PIN = 23;
const int GREEN_PIN = 24;
const int BUTTON_OUT = 37;
const int BUTTON_IN = 43;
int t = 0;
int y = 0;
int toggle = 0;
int seconds = 5;
bool on;
int buttonStatus;

void setup()  {
  Serial.begin(24000);
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BUTTON_OUT, OUTPUT);
  pinMode(BUTTON_IN, INPUT);
  digitalWrite(BUTTON_OUT, HIGH);
  on = false;
  
}


// Kind of works but not exactly like I want
void loop(){
  if (toggle == 0 and digitalRead(BUTTON_IN) == HIGH){
    toggle = 1;
  }
  else if (toggle == 1 and digitalRead(BUTTON_IN) == HIGH){
    toggle = 0;
  }
  if (toggle == 1){
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(BLUE_PIN, HIGH);
    digitalWrite(GREEN_PIN, HIGH);
    delay(250);
    digitalWrite(GREEN_PIN, LOW);
    delay(250);
  }
  if (toggle == 0){
    digitalWrite(RED_PIN, LOW);
    digitalWrite(BLUE_PIN, LOW);
    digitalWrite(GREEN_PIN, LOW);
    //digitalWrite(BUTTON_IN, LOW);
  }
  
  
}
