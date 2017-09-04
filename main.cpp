/*
 * main.cpp
 *
 *  Created on: 4 Sep 2017
 *      Author: jornbrouwer
 */

//STD includes
#include <iostream>

//Local includes
#include "BaseObject.h"
#include "config.h"

int main(int argc, char **argv)
{
	#ifdef DEBUG
		std::cout << "program started" << std::endl;
	#endif

	BaseObject b;

	#ifdef DEBUG
		std::cout << "program ended" << std::endl;
	#endif
	return 0;
}

