/*
 * BaseObject.h
 *
 *  Created on: 4 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef BASEOBJECT_H_
#define BASEOBJECT_H_

//STD includes
#include <iostream>

//Local includes
#include "config.h"

class BaseObject
{
public:
	BaseObject() = default;
	//BaseObject() =delete;

	//BaseObject(); 			//Constructor

	virtual ~BaseObject(); 	//Destructor

	// Copy constructor
	BaseObject(const BaseObject& aObject);

	BaseObject(const std::string& aName);

	// Name (get/set)
	const std::string& getName() const;
	void setName(const std::string& name);

	// Operators
	BaseObject& operator=(const BaseObject& obj);
	bool operator==(const BaseObject& other) const;

private:
	std::string name;

};

#endif /* BASEOBJECT_H_ */
