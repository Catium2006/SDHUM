#ifdef Arduino

#include "sdhum.h"
#include <Arduino.h>

// initialize gpio
void gpio_init(gpio_pin pin, gpio_mode mode) {
    if (mode < 10) {
        pinMode(pin, INPUT);
    } else {
        pinMode(pin, OUTPUT);
    }
}

// read digital signal from gpio
digital_signal gpio_read_digital(gpio_pin pin) {
    if (digitalRead(pin)) {
        return HIGH_;
    } else {
        return LOW_;
    }
}

// write digital signal to gpio
void gpio_write_digital(gpio_pin pin, digital_signal signal) {
    digitalWrite(pin, signal);
}

// read analog signal from gpio
u16 gpio_read_analog(gpio_pin pin) {
    return analogRead(pin);
}

// write analog signal to gpio
void gpio_write_analog(gpio_pin pin, u16 signal) {
    analogWrite(pin, signal);
}

#endif