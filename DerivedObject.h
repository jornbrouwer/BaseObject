/*
 * DerivedObject.h
 *
 *  Created on: 11 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef DERIVEDOBJECT_H_
#define DERIVEDOBJECT_H_

/*
 * DerivedObject.h
 *
 *  Created on: 4 Sep 2017
 *      Author: jornbrouwer
 */


//STD includes
#include <iostream>
#include <ostream>

//Local includes
#include "config.h"

class DerivedObject
{
public:
	//DerivedObject() = default; 	//Wanneer je standaard een constructor wilt hebben
	//DerivedObject() = delete; 		//Wanneer je standaard GEEN constructor wilt gebruiken

	DerivedObject(); 							// Constructor
	virtual ~DerivedObject(); 					// Destructor
	DerivedObject(const DerivedObject& aObject); 	// Copy constructor
	DerivedObject(const std::string& aName); 	// Overloaded constructor
	const std::string& getName() const; 		// Name getter
	void setName(const std::string& name); 	// Name set

	// Operators
	DerivedObject& operator=(const DerivedObject& obj);
	bool operator==(const DerivedObject& other) const; //(const) De instantie die de operator aanroept zal niet veranderen.
	bool operator<(const DerivedObject& rhs) const;

private:
	std::string name;

};

/*
 * Wordt buiten de klasse gedefinieerd omdat anders de "std::ostream& os" door de compiler word gerekend als ook de RightHand Side.
 * We willen dat deze wordt geaccepteerd als lefthandsight
 */
std::ostream& operator<<(std::ostream& os, const DerivedObject& rhs);

#endif /* DERIVEDOBJECT_H_ */
