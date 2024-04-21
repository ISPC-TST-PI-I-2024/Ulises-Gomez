#include <Arduino.h>

// Definir los pines de los LEDs
int ledPins[] = {5, 4, 2}; // Por ejemplo, pines digitales 5, 4 y 2

// Definir el intervalo de tiempo en milisegundos
int intervalo = 1000; // 1000 ms = 1 segundo

// Función para alternar el estado de los LEDs
void alternarLeds() {
  static boolean estado = HIGH; // Estado inicial del LED

  // Cambiar el estado de cada LED
  for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
    digitalWrite(ledPins[i], estado);
  }

  // Alternar el estado
  estado = !estado;
}

void setup() {
  // Configurar los pines de los LEDs como salida
  for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  alternarLeds(); // Alternar el estado de los LEDs
  delay(intervalo); // Esperar el intervalo de tiempo
}
