#pragma once

class Interface
{
protected:
	std::string _name;
	std::string _type;
	IP _ip;
	MAC _mac;

	
public:
	Interface();
	~Interface();

	std::string getName();
	void setName(std::string name);

	IP getIP();
	void setIP(IP ip);

	MAC getMAC();
	void setMAC(MAC mac);

	virtual void autoAssignName(int number);

};

