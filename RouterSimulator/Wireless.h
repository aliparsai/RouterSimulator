#pragma once
#include "Interface.h"
class Wireless :
	public Interface
{
public:
	Wireless();
	~Wireless();
	void autoAssignName(int number);
};

