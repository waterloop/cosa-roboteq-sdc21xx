#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include <wloop/SDC21XX.h>

wlp::SDC21XX sdc(Board::PWM1); //D3

void setup() {
    uart.begin(9600);
    trace.begin(&uart);

    // initialize sdc
    sdc.begin();
}

void loop() {
    sdc.set_speed(0);
    delay(2000);
    sdc.set_speed(40);
    delay(2000);
    sdc.set_speed(50);
    delay(2000);
    sdc.set_speed(60);
    delay(2000);
    sdc.set_speed(100);
    delay(2000);
    sdc.set_speed(-1);          // this will set the controller to speed 0%
    delay(250);
    sdc.set_speed(101);         // this will set the controller to speed 100%
    delay(250);
}
