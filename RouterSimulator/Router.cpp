#include "stdafx.h"
#include "Router.h"
#include "Ethernet.h"

Router::Router()
{
	Device::Device();

	MAC wanmac;
	wanmac.generateRandomMAC();

	IP wanip;
	wanip.generateRandomIP(4);

	Ethernet *wan = new Ethernet[1];
	wan->setMAC(wanmac);
	wan->setIP(wanip);
	wan->setName("WAN Interface");
	wan->setStatus(1);

	addInterface(*wan);

	setName("Router");
	setType("router");
	int routerAddress[4] = { 192, 168, 0, 1 };

	_routerIP.setAddress(routerAddress);
	_listMode = 'b';
}

Router::~Router()
{
}


char Router::getListMode()
{
	return _listMode;
}


void Router::toggleListMode()
{
	if (_listMode == 'b')
		_listMode = 'w';
	else
		_listMode = 'b';
}


std::ostream & operator<<(std::ostream & os, Router &router)
{
	int i;
	os << "Router -- Name: " << router._name << " - Type: " << router._type << " - List Operation Mode: " << 
		router._listMode << " - Number of Interfaces: " << router.interfaceList.size() << 
		" - Number of Blacklisted MACs: " << router.blackList.size() << 
		" - Number of Whitelisted MACs: " << router.whiteList.size() << std::endl;

	for (i = 0; i < router.interfaceList.size(); i++)
	{
		os << "-------------- Interface " << i << " --------------" << std::endl;
		os << router.interfaceList[i] << std::endl;
	}

	os << "--------------------------------------------" << std::endl;
	os << "Blacklisted MACs:" << std::endl;

	for (i = 0; i < router.blackList.size(); i++)
	{
		os << "[" << i << "] " << router.blackList[i] << std::endl;
	}

	os << "--------------------------------------------" << std::endl;
	os << "Whitelisted MACs:" << std::endl;

	for (i = 0; i < router.whiteList.size(); i++)
	{
		os << "[" << i << "] " << router.whiteList[i] << std::endl;
	}

	os << "--------------------------------------------" << std::endl;


	return os;
}
