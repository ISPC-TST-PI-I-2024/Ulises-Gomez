from machine import Pin, ADC, PWM
import time

# Definir el pin del potenciómetro y del LED
pot_pin = ADC(Pin(34))  # Pin analógico para el potenciómetro (GPIO 34 en ESP32)
led_pin = PWM(Pin(5))   # Pin PWM para el LED (GPIO 5 en ESP32)

while True:
    # Leer el valor del potenciómetro
    pot_value = pot_pin.read()

    # Mapear el valor del potenciómetro al rango de 0 a 1023 (PWM)
    pwm_value = int(pot_value / 4)  # La función PWM de MicroPython acepta valores de 0 a 1023

    # Establecer la intensidad del LED usando PWM
    led_pin.duty(pwm_value)

    # Pequeña pausa para evitar rebotes del potenciómetro
    time.sleep(0.1)
