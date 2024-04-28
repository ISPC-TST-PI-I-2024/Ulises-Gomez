#define sw1_1 13
#define sw1_2 12
#define sw1_3 14
#define sw1_4 27
#define led1 18
#define led2 5
#define led3 17
#define led4 16
#define led5 4
#define led6 0
#define led7 2
#define led8 15

void setup() {
  for (int i = 1; i <= 8; i++) {
    pinMode(ledPin(i), OUTPUT);
  }
}

void loop() {
  int estado_sw1_1 = digitalRead(sw1_1);
  int estado_sw1_2 = digitalRead(sw1_2);
  int estado_sw1_3 = digitalRead(sw1_3);
  int estado_sw1_4 = digitalRead(sw1_4);

  if (estado_sw1_1 == LOW && estado_sw1_2 == LOW && estado_sw1_3 == LOW && estado_sw1_4 == LOW) {
    parpadearTodosLosLEDs();
  } else if (estado_sw1_1 == LOW && estado_sw1_2 == LOW) {
    parpadearLEDs(led1, led4);
    parpadearLEDs(led5, led8);
  } else if (estado_sw1_3 == LOW && estado_sw1_4 == LOW) {
    parpadeoSecuencial();
  } else {
    parpadearTodosLosLEDs();
  }
  delay(500);
}

void parpadearTodosLosLEDs() {
  for (int i = 1; i <= 8; i++) {
    digitalWrite(ledPin(i), HIGH);
  }
  delay(500);
  for (int i = 1; i <= 8; i++) {
    digitalWrite(ledPin(i), LOW);
  }
  delay(500);
}

void parpadearLEDs(int inicio, int fin) {
  for (int i = inicio; i <= fin; i++) {
    digitalWrite(ledPin(i), HIGH);
  }
  delay(500);
  for (int i = inicio; i <= fin; i++) {
    digitalWrite(ledPin(i), LOW);
  }
  delay(500);
}

void parpadeoSecuencial() {
  for (int i = 1; i <= 8; i++) {
    digitalWrite(ledPin(i), HIGH);
    delay(250);
    digitalWrite(ledPin(i), LOW);
  }
}

int ledPin(int num) {
  switch (num) {
    case 1: return led1;
    case 2: return led2;
    case 3: return led3;
    case 4: return led4;
    case 5: return led5;
    case 6: return led6;
    case 7: return led7;
    case 8: return led8;
    default: return -1; // En caso de error
  }
}
