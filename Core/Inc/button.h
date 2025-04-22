/*
 * button.h
 *
 *  Created on: Apr 22, 2025
 *      Author: pnnguyen
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

class Button {
public:
	Button(GPIO_TypeDef* port, uint16_t pin);
	bool isPressed();
	bool wasPressed();
private:
	GPIO_TypeDef* _port;
	uint16_t _pin;
	bool _lastState = false;
};



#endif /* INC_BUTTON_H_ */
