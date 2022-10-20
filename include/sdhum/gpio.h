#ifndef __GPIO_H__
#define __GPIO_H__

#include "sdhum/types.h"

enum gpio_mode : u8 {
    /*input*/
    INPUT_ANALOG = 1,  // analog input
    INPUT_FLOAT = 2,   // float input
    INPUT_PU = 3,      // pull up input
    INPUT_PD = 4,      // pull down input
    /*output*/
    OUTPUT_OD = 11,  // open drain output
    OUTPUT_PP = 12   // pull-push output
};

enum digital_signal : u8 {
    LOW = 0,  // LOW
    HIGH = 1  // HIGH
};

typedef u16 gpio_pin;

// initialize gpio
void gpio_init(gpio_pin pin, gpio_mode mode);

// read digital signal from gpio
digital_signal gpio_read_digital(gpio_pin pin);

// write digital signal to gpio
void gpio_write_digital(gpio_pin pin, digital_signal signal);

// read analog signal from gpio
u16 gpio_read_analog(gpio_pin pin);

// write analog signal to gpio
void gpio_write_analog(gpio_pin pin, u16 signal);

#endif