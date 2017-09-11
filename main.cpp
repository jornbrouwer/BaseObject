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

	BaseObject a("A");
	std::cout << a.getName() << std::endl;
	//std::cout << a.getValue() << std::endl;

	DerivedObject D;
	D.setName("B");
	D.setValue(10);

	std:: cout <<"value is: " << D.getValue() <<std::endl;
	std::cout << "D's name : " << D.getName() << std::endl;

	//std::cout << "The name of object B" << b.getName() << std::endl;


	DerivedObject b(D, 10);


	//DerivedObject b(10);
	//std:: cout <<"value is: " << b.getValue() <<std::endl;

	//std::cout << "B's name : " << b.getName() << std::endl;

	//std::cout << b << std::endl;
	//std::cout << "B == A :" << (b ==a) << std::endl;
	//std::cout << "B < A  :" << (b < a) << std::endl;

	#ifdef DEBUG
		std::cout << "program ended" << std::endl;
	#endif
	return 0;
}

