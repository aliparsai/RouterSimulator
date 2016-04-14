#pragma once

#include "Interface.h"
class Connection
{
public:
	Interface * interfaces[2];
	int status;
	void addInterface(Interface*);
	
	Connection();
	~Connection();
};

