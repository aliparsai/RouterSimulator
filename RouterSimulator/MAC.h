#pragma once
class MAC
{
private:
	char16_t address[6];
	char int2hex(int number);
	int hex2int(char hexChar);
	void setComponentText(int componentNumber, char * text);
	char* getComponentText(int componentNumber);
public:
	MAC();
	~MAC();
	void setAddress(char16_t addressComponents[6]);
	void getAddress(char16_t * addressComponents);
	friend std::ostream& operator<<(std::ostream& os, MAC& mac);
	friend std::istream& operator>>(std::istream& is, MAC& mac);
};

