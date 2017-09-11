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
#include "DerivedObject.h"
#include "config.h"

int main(int argc, char **argv)
{
	#ifdef DEBUG
		std::cout << "program started" << std::endl;
	#endif

	DerivedObject a;
	std::cout << a.getName() << std::endl;
	std::cout << a.getValue() << std::endl;

	DerivedObject b(a,100);
	//DerivedObject b(10);
	std:: cout <<"value is: " << b.getValue() <<std::endl;

	std::cout << "B: " << b.getName() << std::endl;

	std::cout << b << std::endl;
	std::cout << "B == A :" << (b ==a) << std::endl;
	std::cout << "B < A  :" << (b < a) << std::endl;

	#ifdef DEBUG
		std::cout << "program ended" << std::endl;
	#endif
	return 0;
}

