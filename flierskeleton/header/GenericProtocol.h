///*
// * GenericProtocol.h
// *
// *  Created on: 6 но€б. 2018 г.
// *      Author: user0
// * I am working on this right now, somehow UDP communication is a bit more complicated than I expected.
// * Instance of this class will return references to two lists of TAVProperty: a list of const ones aka status and non-const aka controls
// * The magic of making them represent AV and be written to it is my job.
// * Think of this as a singleton. It will be one when I remake it for the one final time.
// */
//
#ifndef GENERICPROTOCOL_H_
#define GENERICPROTOCOL_H_
//
#include "AVProperty.h"
#include "asio.hpp"
#include <iostream>
#include <list>
//
////4 bytes isn't word on x64, i compile for x64; start to panic
//#define EoPACKET = 0xDEFEC8ED
//#define NEXTPROPERTY = 0xFEEDFACE
//#define BIGENDIAN = 1
//
////frame: NEXTPROPERTY TYPE DATA ... NEXTPROPERTY TYPE DATA EoPACKET
////if it works for reals it's fine enough for 0.0.1
////what about storing them in the hashmaps with names?
//#define FGSTRING = 'S'
//#define FGREAL = 'R'
//
//#define SERVERIP "192.168.0.4"
//#define SERVERPORT 1666
//
class GenericProtocol
{
//
//	asio::io_service io_service;
//	asio::ip::udp::socket _socket;
//	asio::ip::udp::endpoint remote_endpoint;
//
//	std::list<AVProperty> _status();
////	std::list<AVProperty> _controls = 0; //think of your behaviour
//
//	std::list<AVProperty> getStatus();
//	bool upToDate();
public:

//	GenericProtocol();
//	virtual ~GenericProtocol();
//
//#ifdef DEBUG
//	&asio::ip::udp::socket exposeSocket();
//#endif
//
/// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>==================important part is here!=================================<!
	const GenericProtocol& getInstance();
	std::list<const AVProperty> getStatus();
	std::list<AVProperty> getControls();
//
};
//
//std::ostream& operator<<(std::ostream& os, const GenericProtocol& dt);
#endif /* GENERICPROTOCOL_H_ */
