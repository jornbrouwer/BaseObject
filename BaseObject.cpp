/*
 * BaseObject.cpp
 *
 *  Created on: 4 Sep 2017
 *      Author: jornbrouwer
 */

#include "BaseObject.h"
#include <iostream>
#include <string>

/*
 * Constructor
 */
BaseObject::BaseObject()
{
	#ifdef DEBUG
		std::cout << "base object generated" << std::endl;
	#endif
}

/*
 * Overloaded constructor
 */
BaseObject::BaseObject(const std::string& aName) :
		name(aName)
{
	std::cout << __PRETTY_FUNCTION__ << " " << name << std::endl;
}

/*
 * Destructor
 */
BaseObject::~BaseObject()
{
	#ifdef DEBUG
		std::cout << "Base object deleted" << std::endl;
	#endif
}

/*
 * copy constructor
 */
BaseObject::BaseObject(const BaseObject& aObject) :
		name(aObject.name)
{
	std::cout << __PRETTY_FUNCTION__ << " " << name << std::endl;
}


/*
 * get name-string function
 */
const std::string& BaseObject::getName() const
{
	return name;
}

/*
 * set name-string function
 */
void BaseObject::setName(const std::string& name)
{
	this->name = name;
}


BaseObject& BaseObject::operator=(const BaseObject& obj)
{
	std::cout << __PRETTY_FUNCTION__ << " " << name << std::endl;
	if (this != &obj)
	{
		name = obj.name;
	}
	return *this;
}

bool BaseObject::operator==(const BaseObject& other) const
{
	std::cout << __PRETTY_FUNCTION__ << " " << name << std::endl;
	return name == other.name;
}

bool BaseObject::operator<(const BaseObject& rhs) const
{
	return name <rhs.name;
}
std::ostream& operator<<(std::ostream& os, const BaseObject& rhs)
{
	return os << rhs.getName();
}


