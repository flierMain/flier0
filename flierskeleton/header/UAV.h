/*
 * UAV.h
 *
 *  Created on: 7 но€б. 2018 г.
 *      Author: user0
 *
 *  To be used by protocol. Determines what to read and what to send. A pseudocode placeholder, MAKES LITTLE TO NO SENSE, we will rewrite it completely.
 */

#ifndef UAV_H_
#define UAV_H_
#include "AVProperty.h"

struct UAVcontrols
{
	TAVProperty<double> throttle1, stick_x, stick_y;
};

struct UAVstatus
{
	TAVProperty<double> IAS, altitude, pitcha, yawa, rolla;
};

#endif /* UAV_H_ */
