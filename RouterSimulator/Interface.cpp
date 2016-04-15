#include "stdafx.h"
#include "Interface.h"
#include "IP.h"
#include "MAC.h"


Interface::Interface()
{
	_name = "dummy";
	_type = "generic";
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