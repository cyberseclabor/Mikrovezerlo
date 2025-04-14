from machine import Timer, Pin
import time

led = Pin(6, mode=Pin.OUT)
szam0 = 0
szam1 = 0

def interruptHandler(timer):
    led.value(not led.value())
    global szam0
    szam0 += 1
    print("Timer: " + str(szam0))

if __name__ == "__main__":
    soft_timer = Timer(mode=Timer.PERIODIC, period=1000, callback=interruptHandler)
    
    while True:
        time.sleep(1)
        szam1 += 1
        print("While: " + str(szam1))
