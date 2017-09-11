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
#include <ostream>

//Local includes
#include "config.h"

class BaseObject
{
public:
	//BaseObject() = default; 	//Wanneer je standaard een constructor wilt hebben
	//BaseObject() =delete; 		//Wanneer je standaard GEEN constructor wilt gebruiken

	BaseObject(); 			//Constructor

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
	bool operator<(const BaseObject& rhs) const;


private:
	std::string name;

};

/*
 * Wordt buiten de klasse gedefinieerd omdat anders de "std::ostream& os" door de compiler word gerekend als ook de RightHand Side.
 * We willen dat deze wordt geaccepteerd als lefthandsight
 */
std::ostream& operator<<(std::ostream& os, const BaseObject& rhs);

#endif /* BASEOBJECT_H_ */
