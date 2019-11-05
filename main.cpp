#include "mbed.h"

RawSerial pc(USBTX, USBRX); // tx, rx

DigitalOut led1(LED1);

int main()
{
	char c;
#ifdef MBED_MAJOR_VERSION
    pc.printf("Mbed OS version %d.%d.%d\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
#endif
	pc.printf("Tuya application start!\n\n");
	
    while (true) {
        led1 = !led1;
        wait_ms(500);
		c = pc.getc();
		pc.printf("get input = %d!\r\n",c);
		
    }
}