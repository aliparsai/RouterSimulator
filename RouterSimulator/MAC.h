#pragma once
class MAC
{
private:
	int _address[6];
	char int2hex(int number);
	int hex2int(char hexChar);
	void setComponentText(int componentNumber, char * text);
	std::string getComponentText(int componentNumber);
public:
	MAC();
	~MAC();
	void setAddress(int * addressComponents);
	void getAddress(int * addressComponents);
	void operator=(MAC &mac);
	void generateRandomMAC();
	friend std::ostream& operator<<(std::ostream& os, MAC& mac);
	friend std::istream& operator>>(std::istream& is, MAC& mac);
};
