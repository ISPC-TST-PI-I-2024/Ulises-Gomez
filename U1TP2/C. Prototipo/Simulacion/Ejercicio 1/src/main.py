from machine import Pin
import time

button_pin = Pin(2, Pin.IN)   # Pin donde está conectado el botón
led_pin = Pin(13, Pin.OUT)    # Pin donde está conectado el LED

while True:
    button_state = button_pin.value()  # Lee el estado del botón
    
    if button_state == 1:  # Si el botón está presionado
        led_pin.on()       # Enciende el LED
    else:
        led_pin.off()      # Apaga el LED
    
    time.sleep(0.1)  # Espera un breve período de tiempo para evitar lecturas incorrectas