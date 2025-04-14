# ebben a példában nincs interrupt
# ez a példa bevezető a külső interruptkérés implementálására
from machine import Pin
import time

pinButtun = Pin(20, mode=Pin.IN, pull=Pin.PULL_UP)
pinLed = Pin(25, mode=Pin.OUT)

while True:
    if pinButtun.value():
        pinLed.on()
        print("ON")
    else:
        pinLed.off()
        print("OFF")
    time.sleep(1)
    
    # valami egyéb kód
