/*
 * BaseObject.cpp
 *
 *  Created on: 4 Sep 2017
 *      Author: jornbrouwer
 */

#include "BaseObject.h"

BaseObject::BaseObject()
{
	#ifdef DEBUG
		std::cout << "base object generated" << std::endl;
	#endif
}

BaseObject::~BaseObject()
{
	#ifdef DEBUG
		std::cout << "Base object deleted" << std::endl;
	#endif
}

