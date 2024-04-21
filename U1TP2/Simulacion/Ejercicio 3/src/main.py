from machine import Pin
import time

# Definir los pines de los LEDs
led_pins = [Pin(pin, Pin.OUT) for pin in [5, 4, 0]]  # Por ejemplo, pines GPIO 5, 4 y 0

# Definir el intervalo de tiempo en segundos
intervalo = 1

# Función para alternar el estado de los LEDs
def alternar_leds():
    for led in led_pins:
        led.value(not led.value())  # Cambiar el estado del LED

# Bucle principal
while True:
    alternar_leds()  # Alternar el estado de los LEDs
    time.sleep(intervalo)  # Esperar el intervalo de tiempo