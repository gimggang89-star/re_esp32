// LED 핀 변수 선언.
#define RED_LED     5
#define YELLOW_LED  18
#define GREEN_LED   19

// 아두이노 기본 설정.
void setup() {
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

// 아두이노 반복 구간 설정.
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
