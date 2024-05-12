int pin_dieciocho = 18;
int pin_cinco = 5;
int pin_diecisiete = 17;
int pin_dieciseis = 16;
int pin_cuatro = 4;
int pin_cero = 0;
int pin_dos = 2;
int pin_quince = 15;

int pin_pulsador = 34;

void setup() {
  
  pinMode(pin_dieciocho, OUTPUT);
  pinMode(pin_cinco, OUTPUT);
  pinMode(pin_diecisiete, OUTPUT);
  pinMode(pin_dieciseis, OUTPUT);
  pinMode(pin_cuatro, OUTPUT);
  pinMode(pin_cero, OUTPUT);
  pinMode(pin_dos, OUTPUT);
  pinMode(pin_quince, OUTPUT);

  pinMode(pin_pulsador, INPUT_PULLUP);

}

void loop() {
  
  if (digitalRead(pin_pulsador) == LOW) {

  digitalWrite(pin_dieciocho, HIGH);
  delay(500);
  digitalWrite(pin_dieciocho, LOW);
  delay(500);

  digitalWrite(pin_cinco, HIGH);
  delay(500);
  digitalWrite(pin_cinco, LOW);
  delay(500);

  digitalWrite(pin_diecisiete, HIGH);
  delay(500);
  digitalWrite(pin_diecisiete, LOW);
  delay(500);

  digitalWrite(pin_dieciseis, HIGH);
  delay(500);
  digitalWrite(pin_dieciseis, LOW);
  delay(500);

  digitalWrite(pin_cuatro, HIGH);
  delay(500);
  digitalWrite(pin_cuatro, LOW);
  delay(500);

  digitalWrite(pin_cero, HIGH);
  delay(500);
  digitalWrite(pin_cero, LOW);
  delay(500);

  digitalWrite(pin_dos, HIGH);
  delay(500);
  digitalWrite(pin_dos, LOW);
  delay(500);

  digitalWrite(pin_quince, HIGH);
  delay(500);
  digitalWrite(pin_quince, LOW);
  delay(500);
  
  }
}