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
	BaseObject(); 			//Constructor

	virtual ~BaseObject(); 	//Destructor
};

#endif /* BASEOBJECT_H_ */
