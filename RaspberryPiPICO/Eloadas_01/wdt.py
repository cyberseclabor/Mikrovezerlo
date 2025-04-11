from machine import WDT
import time

print("WDT konfig")
wdt = WDT(timeout=5000)

# a wdt.feed() függvény törli a WDT számlálót
wdt.feed()
print("OKÉ, működik a WDT")

while True:
    print("működik")
    #wdt.feed()
    time.sleep(1)
