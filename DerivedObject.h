/*
 * DerivedObject.h
 *
 *  Created on: 11 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef DERIVEDOBJECT_H_
#define DERIVEDOBJECT_H_

//STD includes
#include <iostream>
#include <ostream>

#include "BaseObject.h"
//Local includes
#include "config.h"

class DerivedObject : public BaseObject
{
public:
	//DerivedObject() = default; 	//Wanneer je standaard een constructor wilt hebben
	//DerivedObject() = delete; 		//Wanneer je standaard GEEN constructor wilt gebruiken

	DerivedObject(); 											// Constructor
	DerivedObject(const std::string& aName); 					// Overloaded constructor (STRING)
	DerivedObject(short value);									// Overloaded constructor (SHORT)
	DerivedObject(const DerivedObject& aObject, short aValue); 	// Copy constructor
	virtual ~DerivedObject(); 									// Destructor


	// Operators
	DerivedObject& operator=(const DerivedObject& obj);
	bool operator==(const DerivedObject& other) const; //(const) De instantie die de operator aanroept zal niet veranderen.
	bool operator<(const DerivedObject& rhs) const;

	const short getValue() const;
	void setValue(const short aValue);

private:
	std::string name;
	short value;
};

/*
 * Wordt buiten de klasse gedefinieerd omdat anders de "std::ostream& os" door de compiler word gerekend als ook de RightHand Side.
 * We willen dat deze wordt geaccepteerd als lefthandsight
 */
std::ostream& operator<<(std::ostream& os, const DerivedObject& obj);

#endif /* DERIVEDOBJECT_H_ */
