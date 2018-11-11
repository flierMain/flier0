/*
 * AVProperty.h
 *
 *  Created on: 6 но€б. 2018 г.
 *      Author: user0
 *
 *  Class to handle any values that make up the AV status (i.e. indicated airspeed, baro altitude, etc)  and controls (stick angles, etc etc).
 *  TAVProperty<T>& operator<<(const T&) updates the value stored; any non-const TAVProperty is supposed to be a part of controls
 *  We only really need TAVProperty<double> in the scope of uni project tho.
 */

#ifndef AVPROPERTY_H_
#define AVPROPERTY_H_

class AVProperty
{
	// std::string name; do we really need a name?

public:
	AVProperty();
	virtual ~AVProperty();
};

template <typename T>
class TAVProperty : AVProperty
{

public:
	TAVProperty();
	virtual ~TAVProperty();
	TAVProperty<T>& operator<<(const T&);

};


#endif /* AVPROPERTY_H_ */
