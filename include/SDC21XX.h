/**
 * @file SDC2160S.h
 * @brief Controller for Brushless DC Roboteq SDC21XXX motors
 *
 * This file contains interface for the controller
 *
 * @author Quinton Lucyk
 * @author Deep Dhillon
 * @date July 3, 2018
 * @bug No known bugs
 */

#ifndef GOOSE_CONTROLLER_SDC2160S_H
#define GOOSE_CONTROLLER_SDC2160S_H

#include <Cosa/PWMPin.hh>

namespace wlp {

    class SDC21XX {
    public:
        explicit SDC21XX(Board::PWMPin pwm_pin);

        /**
         * Set's speed of esc. This is a percentage from 0 to 100
         *
         * @param speed esc speed percentage to set (0 to 100)
         */
        void set_speed(uint8_t speed);

        /**
         * Initializes the controller for use
         */
        void begin();

    private:
        PWMPin m_pwm_pin;
    };
}

#endif //GOOSE_CONTROLLER_SDC2160S_H
