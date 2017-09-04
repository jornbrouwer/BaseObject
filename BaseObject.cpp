/*
 * BaseObject.cpp
 *
 *  Created on: 4 Sep 2017
 *      Author: jornbrouwer
 */

#include <iostream>

#include "BaseObject.h"

BaseObject::BaseObject()
{
	std::cout << "base object generated" << std::endl;

}

BaseObject::~BaseObject()
{
	std::cout << "Base object deleted" << std::endl;
}

