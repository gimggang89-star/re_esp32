#define RED_LED     5
#define YELLOW_LED  18
#define GREEN_LED   19

void setup() {
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char sData = Serial.read();

    if (sData == 'r') digitalWrite(RED_LED, HIGH);
    else if (sData == 'y') digitalWrite(YELLOW_LED, HIGH);
    else if (sData == 'g') digitalWrite(GREEN_LED, HIGH);
    else if (sData == 'o') {
      digitalWrite(RED_LED, LOW);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(GREEN_LED, LOW);
    }
  }
}
