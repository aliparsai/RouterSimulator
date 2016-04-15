#pragma once
#include "IP.h"
#include "MAC.h"

class Interface
{
protected:
	std::string _name;
	std::string _type;
	IP _ip;
	MAC _mac;
	int _status;
	
	
public:
	Interface *connectedInterface;

	Interface();
	~Interface();

	std::string getName();
	void setName(std::string name);

	IP getIP();
	void setIP(IP ip);

	MAC getMAC();
	void setMAC(MAC mac);

	void setStatus(int status);
	int getStatus();

	void operator=(Interface & in);

	void connect(Interface * externalInterface, bool firstTimeFlag);

	void setType(std::string type);

	std::string getType();
	
	virtual void autoAssignName(int number);

	
};

