#include "stdafx.h"
#include "Device.h"
#include "Interface.h"


Device::Device()
{
	_name = "dummy";
	_type = "generic";

}


Device::~Device()
{

}

void Device::addInterface(Interface &in)
{
	interfaceList.push_back(in);
}
