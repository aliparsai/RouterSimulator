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

	routerIP.setAddress(routerAddress);
	listMode = 'b';
}

Router::~Router()
{
}

