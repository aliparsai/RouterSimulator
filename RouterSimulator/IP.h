#pragma once
class IP
{
private:
	int _address[4];
	std::string int2str(int number);
	int str2int(std::string stringAddress);

public:
	IP();
	~IP();
	void setAddress(int* addressComponents);
	void getAddress(int* addressComponents);
	void operator=(IP & ip);
	void generateRandomIP(int byteNumber);
	friend std::ostream& operator << (std::ostream& os, IP& ip);
	friend std::istream& operator >> (std::istream& is, IP& ip);

};

