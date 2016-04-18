#include "stdafx.h"
#include "CommandLineInterface.h"


CommandLineInterface::CommandLineInterface()
{
}


CommandLineInterface::~CommandLineInterface()
{
}



template<class T> T CommandLineInterface::choiceMenu(T * choices, int size)
{
	int i;
	char choice;

	for (i = 0; i < size; i++)
	{
		std::cout << "--- [ Choice" << 'A' + i << "] ---" << std::endl;
		std::cout << T[i] << std::endl;
	}
	
	cout << "---------------------------------" << std::endl << "--- Enter your choice: ";
	std::cin.get(choice);
	
	if (choice <= 'Z' && choice >= 'A')
		return T[choice - 'A'];
	else if (choice <= 'z' && choice >= 'a')
		return T[choice - 'a'];
	else if (choice <= '9' && choice >= '1')
		return T[choice - '1'];
	
	return T[0];

}
