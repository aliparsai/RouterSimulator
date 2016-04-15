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

	void setName(std::string name);

	std::string getName();

	void setType(std::string type);

	std::string getType();

	int getFreeInterface(std::string type);
	int getInterfaceByName(std::string name);
	friend std::ostream& operator << (std::ostream& os, Device& dev);


};

