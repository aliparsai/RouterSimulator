#include "stdafx.h"
#include "WirelessNode.h"
#include "Wireless.h"

WirelessNode::WirelessNode()
{
	_name = "dummy";
	_type = "wireless";
	Wireless in;
	addInterface(in);
}


WirelessNode::~WirelessNode()
{
}
