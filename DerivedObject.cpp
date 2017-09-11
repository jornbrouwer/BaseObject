/*
 * DerivedObject.cpp
 *
 *  Created on: 11 Sep 2017
 *      Author: jornbrouwer
 */

#include "DerivedObject.h"

/*
 *  Constructur
 */
DerivedObject::DerivedObject(): BaseObject()
{
	#ifdef DEBUG
		std::cout << "Derived object generated" << std::endl;
	#endif
}

/*
 * Overloaded constructor
 */
DerivedObject::DerivedObject(const std::string& aName)
	: name(aName)
{
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
DerivedObject::DerivedObject(const DerivedObject& aObject)
{
	#ifdef DEBUG
		std::cout << "Derived Object : copy constructor used" << std::endl;
	#endif
}

/*
 * Name getter
 */
const std::string& DerivedObject::getName() const
{
	return name;
}

/*
 * Name setter
 */
void DerivedObject::setName(const std::string& name)
{
	this->name = name;
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
	return name == other.name;
}

bool DerivedObject::operator<(const DerivedObject& rhs) const
{
	return name <rhs.name;
}

std::ostream& operator<<(std::ostream& os, const DerivedObject& rhs)
{
	os << rhs.getName();
	return os;
}
