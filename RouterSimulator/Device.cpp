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

void Device::setName(std::string name)
{
	_name = name;
}

std::string Device::getName()
{
	return _name;
}

void Device::setType(std::string type)
{
	_type = type;
}

std::string Device::getType()
{
	return _type;
}

int Device::getFreeInterface(std::string type = "")
{
	bool filterForType = true;
	
	if (type == "") 
		filterForType = false;

	for (int i = 0; i < interfaceList.size(); i++)
	{
		if (interfaceList[i].getStatus() == 0 && (!filterForType || interfaceList[i].getType() == type))
			return i;
	}

	return -1;
}