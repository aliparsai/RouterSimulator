#include "stdafx.h"
#include "IP.h"


IP::IP()
{
}


IP::~IP()
{
}


std::string IP::int2str(int number)
{
	std::ostringstream os;
	os << _address[number]; 
	return os.str();
}


int IP::str2int(std::string stringAddress)
{
	int result = 0;
	for (int i = 0; i < stringAddress.length(); i++)
		result = 10 * result + stringAddress.at(i) - '0';
	
	return result;

}


void IP::setAddress(int* addressComponents)
{
	for (int i = 0; i < 4; i++)
		_address[i] = addressComponents[i];
}

void IP::getAddress(int* addressComponents)
{
	for (int i = 0; i < 4; i++)
		addressComponents[i] = _address[i];
}

std::ostream& operator << (std::ostream& os, IP& ip)
{
	for (int i = 0; i < 3; i++)
		os << ip.int2str(i) << '.';

	os << ip.int2str(3);

	return os;
}

std::istream& operator >> (std::istream& is, IP& ip)
{
	std::string formattedText;
	is >> formattedText;

	int pos = 0, newpos = 0;

	for (int i = 0; i<3; i++)
	{
		newpos = formattedText.find(".", pos);
		ip._address[i] = ip.str2int(formattedText.substr(pos, (newpos - pos)));
		pos = newpos + 1;
	}
	
	ip._address[3] = ip.str2int(formattedText.substr(pos, (formattedText.npos + 1 - pos)));
	
	return is;
}


void IP::operator= (IP &ip)
{
	int tmpAddress[4];
	ip.getAddress(tmpAddress);
	setAddress(tmpAddress);
}