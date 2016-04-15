#pragma once
#include "Interface.h"
class Ethernet :
	public Interface
{
public:
	Ethernet();
	~Ethernet();
	void autoAssignName(int number);
};

