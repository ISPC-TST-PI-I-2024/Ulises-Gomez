#include <Arduino.h>


const int buttonPin = 2;  // Pin del botón
const int ledPin = 13;    // Pin del LED

void setup() {
  pinMode(buttonPin, INPUT);  // Configura el pin del botón como entrada
  pinMode(ledPin, OUTPUT);    // Configura el pin del LED como salida
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // Lee el estado del botón
  
  if (buttonState == HIGH) {  // Si el botón está presionado (HIGH)
    digitalWrite(ledPin, HIGH);  // Enciende el LED
  } else {
    digitalWrite(ledPin, LOW);  // Apaga el LED
  }
}