#pragma once
#include "Device.h"
class Router :
	public Device
{
public:
	std::vector <MAC> whiteList;
	std::vector <MAC> blackList;
	char listMode;

	IP routerIP;


	Router();
	~Router();
};

