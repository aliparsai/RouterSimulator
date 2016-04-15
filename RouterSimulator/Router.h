#pragma once
#include "Device.h"
class Router :
	public Device
{
private:
	char _listMode;
	IP _routerIP;

public:
	std::vector <MAC> whiteList;
	std::vector <MAC> blackList;


	Router();
	~Router();

	char getListMode();

	void toggleListMode();

	friend std::ostream & operator<<(std::ostream & os, Router & router);
};

