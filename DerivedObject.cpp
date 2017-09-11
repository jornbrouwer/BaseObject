/*
 * DerivedObject.cpp
 *
 *  Created on: 11 Sep 2017
 *      Author: jornbrouwer
 */

#include "DerivedObject.h"

/*
 *  Constructor with initializing list
 */
DerivedObject::DerivedObject() :
		BaseObject("Derived"),value(0)
{
	#ifdef DEBUG
		std::cout << "Derived object generated" << std::endl;
	#endif
}

/*
 * Overloaded with a short (VALUE)
 */
DerivedObject::DerivedObject(short aValue) : BaseObject("Derived"), value(aValue)
{
}

/*
 * Overloaded with a string (NAME)
 */
DerivedObject::DerivedObject(const std::string& aName) :
			BaseObject("Derived"), value(0)
{
	name = aName;
	std::cout << __PRETTY_FUNCTION__ << " " << name << std::endl;
}

/*
 * getter for the value
 */
const short DerivedObject::getValue() const
{
	return value;
}

/*
 * Destructor
 */
DerivedObject::~DerivedObject()
{
	#ifdef DEBUG
		std::cout << "Derived object deleted" << std::endl;
	#endif
}

/*
 * Copy-constructor
 */
DerivedObject::DerivedObject(const DerivedObject& aObject, short aValue) : BaseObject(aObject), value(aValue)
{
	#ifdef DEBUG
		std::cout << "Derived Object : copy constructor used" << std::endl;
	#endif
}

/*
 * assignment operator
 */
DerivedObject& DerivedObject::operator=(const DerivedObject& other)
{
	if(this != &other)
		{
			BaseObject::operator=(other);
		}
	return *this;
}

bool DerivedObject::operator==(const DerivedObject& other) const
{
	return BaseObject::operator ==(other);
}

bool DerivedObject::operator<(const DerivedObject& other) const
{
	if(BaseObject::operator==(other))
	{
		//TODO
		return false;
	}
		else
	{
		return BaseObject::operator<(other);
	}
}

std::ostream& operator<<(std::ostream& os, const DerivedObject& obj)
{
	//operator<< (os, obj);
	return os;
}

