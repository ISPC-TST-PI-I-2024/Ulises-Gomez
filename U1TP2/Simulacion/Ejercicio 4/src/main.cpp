#include <Arduino.h>

// Definir los pines del potenciómetro y del LED
const int potPin = A0;  // Pin analógico para el potenciómetro
const int ledPin = 9;   // Pin PWM para el LED

void setup() {
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Leer el valor del potenciómetro
  int potValue = analogRead(potPin);
  
  // Mapear el valor del potenciómetro al rango de 0 a 255 (PWM)
  int pwmValue = map(potValue, 0, 1023, 0, 255);
  
  // Establecer la intensidad del LED usando PWM
  analogWrite(ledPin, pwmValue);
  
  // Pequeña pausa para evitar rebotes del potenciómetro
  delay(10);
}
