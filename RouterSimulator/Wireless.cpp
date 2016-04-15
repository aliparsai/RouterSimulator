#include "stdafx.h"
#include "Wireless.h"


Wireless::Wireless()
{
	Interface::Interface();
	_type = "wireless";
}


Wireless::~Wireless()
{
}

void Wireless::autoAssignName(int number)
{
	std::ostringstream os;
	os << "wlan" << number;
	_name = os.str();
}