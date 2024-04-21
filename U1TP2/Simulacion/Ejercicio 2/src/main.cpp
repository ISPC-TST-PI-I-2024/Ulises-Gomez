#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_MLX90614.h>

// Inicializar el objeto para el sensor de temperatura
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  // Inicializar la comunicación serial
  Serial.begin(9600);

  // Inicializar el sensor de temperatura
  mlx.begin();
}

void loop() {
  // Leer la temperatura ambiente
  float temperaturaAmbiente = mlx.readAmbientTempC();

  // Leer la temperatura del objeto
  float temperaturaObjeto = mlx.readObjectTempC();

  // Mostrar las temperaturas en el Serial Monitor
  Serial.print("Temperatura Ambiente: ");
  Serial.print(temperaturaAmbiente);
  Serial.println(" °C");
  Serial.print("Temperatura del Objeto: ");
  Serial.print(temperaturaObjeto);
  Serial.println(" °C");

  // Esperar un breve periodo de tiempo antes de la próxima lectura
  delay(1000);
}


// Adafruit no esta difinido, es decir tengo que descargar esa libreria 
// o definir lo que hacen esas librerias.