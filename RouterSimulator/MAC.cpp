#include "stdafx.h"
#include "MAC.h"



char MAC::int2hex(int number)
{
	if (number >= 16 || number < 0) 
		return '?';
	
	if (number < 10)
		return (char) '0' + number;

	if (number >= 10)
		return (char) 'a' + number - 10;

}


int MAC::hex2int(char hexChar)
{
	if (hexChar > 'f' && hexChar < 'a' && hexChar < '0' && hexChar > '9')
		return -1;

	if (hexChar <= 'f' && hexChar >= 'a')
		return (int) hexChar - 'a' + 10;

	if (hexChar <= '9' && hexChar >= '0')
		return (int) hexChar - '0';
}



void MAC::setComponentText(int componentNumber, char* text)
{
	address[componentNumber] = (char16_t) hex2int(text[0]) * 16 + hex2int(text[1]);
}


char* MAC::getComponentText(int componentNumber)
{
	char text[2];
	
	text[0] = int2hex((address[componentNumber] / 16));
	text[1] = int2hex((address[componentNumber] % 16));

	return text;
}

MAC::MAC()
{
	for (int i = 0; i < 6; i++)
		address[i] = 0;
}


MAC::~MAC()
{
}


void MAC::setAddress(char16_t addressComponents[6])
{
	for (int i = 0; i < 6; i++)
		address[i] = addressComponents[i];
}

void MAC::getAddress(char16_t* addressComponents)
{
	for (int i = 0; i < 6; i++)
		addressComponents[i] = address[i];
}

std::ostream& operator << (std::ostream& os, MAC& mac)
{
	for (int i = 0; i < 5; i++)
		os << mac.getComponentText(i) << ':' ;

	os << mac.getComponentText(5);
		
	return os;
}

std::istream& operator >> (std::istream& is, MAC& mac)
{
	char tmp[2];

	std::string formattedText;
	is >> formattedText;

	for (int i=0; i<6; i++)
	{
		tmp[0] = formattedText.at(3 * i);
		tmp[1] = formattedText.at(3 * i + 1);
		mac.setComponentText(i, tmp);
	}
	
	return is;
}

