//const int RED_PIN = 22;
//const int BLUE_PIN = 23;
//const int GREEN_PIN = 24;
//const int BUTTON_OUT = 37;
//const int BUTTON_IN = 43;
//int t = 0;
//int y = 0;
//
//
//void setup()  {
//  pinMode(RED_PIN, OUTPUT);
//  pinMode(BLUE_PIN, OUTPUT);
//  pinMode(GREEN_PIN, OUTPUT);
//  pinMode(BUTTON_OUT, OUTPUT);
//  pinMode(BUTTON_IN, INPUT);
//  digitalWrite(BUTTON_OUT, HIGH);
//}
//
//void loop(){
//  t = 0;
//  if (digitalRead(BUTTON_IN) == HIGH){
//    digitalWrite(RED_PIN, HIGH);
//    digitalWrite(BLUE_PIN, HIGH);
//    while (t < 3){
//      digitalWrite(GREEN_PIN, HIGH);
//      delay(500);
//      digitalWrite(GREEN_PIN, LOW);
//      delay(500);
//      t += 1;
//    }
//  }
//  else{
//    digitalWrite(RED_PIN, LOW);
//    digitalWrite(BLUE_PIN, LOW);
//  }
//  
//}
