#include "stdafx.h"
#include "Connection.h"


void Connection::addInterface(Interface * inputInterface)
{
	if (status == 0)
	{
		interfaces[0] = inputInterface;
		status = 1;
	}
	else if (status == 1)
	{
		interfaces[1] = inputInterface;
		status = 2;
	}
}

Connection::Connection()
{
	status = 0;
	interfaces[0] = NULL;
	interfaces[1] = NULL;
}


Connection::~Connection()
{
}
