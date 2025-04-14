from machine import Pin
import time

pinButtun = Pin(20, mode=Pin.IN, pull=Pin.PULL_UP)
pinLed = Pin(25, mode=Pin.OUT)

def buttonISR(pin):
    pinLed.value(not pinLed.value())
    print("ON")

pinButtun.irq(trigger=Pin.IRQ_FALLING, handler=buttonISR)

while True:
    #valami kód
    time.sleep(1)
    print("while")
