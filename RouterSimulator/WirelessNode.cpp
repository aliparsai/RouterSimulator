#include "stdafx.h"
#include "WirelessNode.h"
#include "Wireless.h"

WirelessNode::WirelessNode()
{
	_name = "dummy";
	_type = "wireless";
	Wireless *in = new Wireless[1];
	addInterface(*in);
}


WirelessNode::~WirelessNode()
{
}
