from machine import RTC
import time

rtc = RTC()
rtc.datetime((2025, 4, 11, 1, 1, 30, 0, 0))
print(rtc.datetime())

now = time.localtime()
print(now)

print("Date: {}/{}/{}".format(now[0], now[1], now[2]))
print("Time: {}:{}".format(now[3], now[4]))
