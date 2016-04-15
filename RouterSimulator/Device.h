#pragma once
#include "Interface.h"

class Device
{
protected:
	std::string _name;
	std::string _type;
	
public:
	std::vector<Interface> interfaceList;
	Device();
	~Device();
	void addInterface(Interface & in);
	
};

