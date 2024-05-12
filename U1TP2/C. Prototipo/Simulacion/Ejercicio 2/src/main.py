from machine import Pin, I2C
import time

# Definir la dirección del sensor de temperatura MLX90614
MLX90614_ADDRESS = 0x5A

# Configurar el bus I2C
i2c = I2C(scl=Pin(5), sda=Pin(4), freq=100000)

def read_temperature():
    # Leer los datos de temperatura del sensor MLX90614
    data = i2c.readfrom_mem(MLX90614_ADDRESS, 0x07, 2)
    
    # Convertir los datos en temperatura Celsius
    temp_data = (data[1] << 8) | data[0]
    temperature = (temp_data * 0.02) - 273.15
    
    return temperature

while True:
    # Leer la temperatura
    temp = read_temperature()
    
    # Mostrar la temperatura en el Serial Monitor/consola
    print("Temperatura: {:.2f} °C".format(temp))
    
    # Esperar un segundo antes de la próxima lectura
    time.sleep(1)
