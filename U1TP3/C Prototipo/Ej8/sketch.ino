#define sw1_1 13
#define sw1_2 12
#define sw1_3 14
#define sw1_4 27
#define sw1_5 26
#define sw1_6 25
#define sw1_7 33
#define sw1_8 32

#define led1 18
#define led2 5
#define led3 17
#define led4 16
#define led5 4
#define led6 0
#define led7 2
#define led8 15

void setup() {
  pinMode(sw1_1, INPUT_PULLUP);
  pinMode(sw1_2, INPUT_PULLUP);
  pinMode(sw1_3, INPUT_PULLUP);
  pinMode(sw1_4, INPUT_PULLUP);
  pinMode(sw1_5, INPUT_PULLUP);
  pinMode(sw1_6, INPUT_PULLUP);
  pinMode(sw1_7, INPUT_PULLUP);
  pinMode(sw1_8, INPUT_PULLUP);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {
  digitalWrite(led1, digitalRead(sw1_1));
  digitalWrite(led2, digitalRead(sw1_2));
  digitalWrite(led3, digitalRead(sw1_3));
  digitalWrite(led4, digitalRead(sw1_4));
  digitalWrite(led5, digitalRead(sw1_5));
  digitalWrite(led6, digitalRead(sw1_6));
  digitalWrite(led7, digitalRead(sw1_7));
  digitalWrite(led8, digitalRead(sw1_8));
}