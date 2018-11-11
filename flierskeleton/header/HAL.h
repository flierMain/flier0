/*
 * HAL.h
 *
 *  Created on: 6 но€б. 2018 г.
 *      Author: user0
 *
 *  HAL. nuff said, look at the UMLs. Think of aggregating Protocol here instead of making it a singleton.
 */

#ifndef HAL_H_
#define HAL_H_

#include "AVProperty.h"
#include "asio.hpp"
#include "FIFOhandler.h"
#include <list>
#include <iostream>
class HAL
{
	//crucial and hard part is here. We have to identify properties somehow. Give them const prop names defined in UAV.h?
	//Store them in the hashmap of name:prop instead of lists? Both? Something completely different?
	std::list<const AVProperty> status;
	std::list<AVProperty> controls;

public:
	HAL();
	virtual ~HAL();
};

#endif /* HAL_H_ */

//ACHTUNG!!! This is HEADER, move this main out of here.
int main()
{
	//and this is the task
	FIFOhandler& f;
	// echo 0.5 > /dev/airframe/rudder
	std::string propID = "rudder";
	f.halInput(propId, 0.5);
	//should do something. preferably birth a lot of strings from different methods where they humbly report being called
	//feel free to change anything, just keep the idea of "echo 0.5 > /dev/airframe/rudder"
}
