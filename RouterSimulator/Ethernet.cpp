#include "stdafx.h"
#include "Ethernet.h"


Ethernet::Ethernet()
{
		Interface::Interface();
		_type = "ethernet";
}


Ethernet::~Ethernet()
{
}


void Ethernet::autoAssignName(int number)
{
	std::ostringstream os;
	os << "eth" << number;
	_name = os.str();
}