#pragma once
class CommandLineInterface
{
public:
	template <class T> T choiceMenu(T* choices, int size);

	
	CommandLineInterface();
	~CommandLineInterface();
};
