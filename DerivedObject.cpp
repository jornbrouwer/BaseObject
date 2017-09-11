/*
 * DerivedObject.cpp
 *
 *  Created on: 11 Sep 2017
 *      Author: jornbrouwer
 */

#include "DerivedObject.h"

DerivedObject::DerivedObject(): BaseObject("Derived")
{

}

DerivedObject::~DerivedObject()
{
}

DerivedObject::DerivedObject(const DerivedObject& aObject)
{
}

DerivedObject::DerivedObject(const std::string& aName)
{
}

const std::string& DerivedObject::getName() const
{
}

void DerivedObject::setName(const std::string& name)
{
}

DerivedObject& DerivedObject::operator =(const DerivedObject& obj)
{
}

bool DerivedObject::operator ==(const DerivedObject& other) const
{
}

bool DerivedObject::operator <(const DerivedObject& rhs) const
{
}

std::ostream& operator <<(std::ostream& os, const DerivedObject& rhs)
{
}
