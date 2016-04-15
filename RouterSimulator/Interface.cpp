#include "stdafx.h"
#include "Interface.h"
#include "IP.h"
#include "MAC.h"


Interface::Interface()
{
	_name = "dummy";
	_type = "generic";
	_status = 0;
}


Interface::~Interface()
{
}

std::string Interface::getName()
{
	
	return _name;
}

void Interface::setName(std::string name)
{
	_name = name;
}

IP Interface::getIP()
{
	return _ip;
}

void Interface::setIP(IP ip)
{
	_ip = ip;
}

MAC Interface::getMAC()
{
	return _mac;
}

void Interface::setMAC(MAC mac)
{
	_mac = mac;
}

void Interface::autoAssignName(int number)
{
	std::ostringstream os;
	os << "int" << number;
	_name = os.str();
}

void Interface::setStatus(int status)
{
	_status = status;
}

int Interface::getStatus()
{
	return _status;
}

void Interface::operator= (Interface & in)
{
	_mac = in._mac;
	_ip = in._ip;
	_name = in._name;
	_type = in._type;
	_status = in._status;
}

void Interface::connect(Interface *externalInterface, bool firstTimeFlag = true)
{
	connectedInterface = externalInterface;
	_status = 1;

	if (firstTimeFlag) 
		externalInterface->connect(this, false);

}


void Interface::setType(std::string type)
{
	_type = type;
}

std::string Interface::getType()
{
	return _type;
}