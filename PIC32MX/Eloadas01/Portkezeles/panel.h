#define     BTN     PORTAbits.RA14
#define     LEDs    LATD
#define     LEDsA() { LEDs = 0xAAAA; }
#define     LEDs5() { LEDs = 0x5555; }
