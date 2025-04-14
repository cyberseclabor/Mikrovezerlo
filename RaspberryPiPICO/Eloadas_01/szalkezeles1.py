from time import sleep
import _thread

# mind a két függvényben végtelen ciklus található
def core0Thread():
    szam0 = 0
    while True:
        szam0 += 2
        sleep(2)
        print("Core0: " + str(szam0))

def core1Thread():
    szam1 = 1
    while True:
        szam1 += 2
        sleep(2)
        print("Core1: " + str(szam1))

second_thread = _thread.start_new_thread(core1Thread, ())
core0Thread()
