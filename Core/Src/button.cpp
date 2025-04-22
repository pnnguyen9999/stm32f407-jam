/*
 * button.cpp
 *
 *  Created on: Apr 22, 2025
 *      Author: pnnguyen
 */

#include "button.h"


Button::Button(GPIO_TypeDef* port, uint16_t pin) {
    _port = port;
    _pin = pin;
}

bool Button::isPressed() {
    return HAL_GPIO_ReadPin(_port, _pin) == GPIO_PIN_RESET;
}

bool Button::wasPressed() {
    bool now = isPressed();
    bool rising = (! _lastState) && now;
    _lastState = now;
    return rising;
}


