/**
 * @file SDC2160S.cpp
 * @brief Controller for Brushless DC Roboteq SDC21XXX motors
 *
 * This file contains implementation for the controller
 *
 * @author Quinton Lucyk
 * @author Deep Dhillon
 * @date July 3, 2018
 * @bug No known bugs
 */

#include <Cosa/Trace.hh>
#include "SDC21XX.h"

#define SCALE_1 2.4693877551  // (184-63)/49
#define SCALE_2 1.26530612245 // (253-191)/49

using namespace wlp;

SDC21XX::SDC21XX(Board::PWMPin pwm_pin)
        : m_pwm_pin(pwm_pin) {}

void SDC21XX::set_speed(uint8_t speed) {
    // if speed given is out of bounds, bound the value to 0 or 100
    if (speed < 0) {
        speed = 0;
    } else if (speed > 100) {
        speed = 100;
    }

    uint16_t scaled_speed = 0;

    if (speed == 50) {
        scaled_speed = 190;
    } else if (0 <= speed && speed < 50) {
        //need to map speeds 0-49 to 63-184 for scaled_speed
        scaled_speed = (speed * SCALE_1) + 63;
    } else if (50 < speed && speed <= 100) {
        //need to map speeds 51-100 to 191-253 for scaled_speed
        scaled_speed = ((speed - 51) * SCALE_2) + 191;
    }

    m_pwm_pin.set(scaled_speed);
}

void SDC21XX::begin() {
    m_pwm_pin.begin();
}
