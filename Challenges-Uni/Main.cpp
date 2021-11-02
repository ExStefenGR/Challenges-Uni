#include <iostream>
#include "MessageSys.h"

int keypress();
int main()
{
	//=============MessageSystem=============
	MessageSys messages;
	bool done = false;
	int option;
	while (!done)
	{
		if (!(std::cin >> option))
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Invalid Input!" << std::endl << std::endl;
			continue;
		}
		if (option == 1) //Keyboard press 2
		{
			messages.GetAnswer();
		}
		else if (option == 2) //Keyboard press 0
		{
			messages.SetMessage();
		}
		else if (option == 3)
		{
			messages.GetMessage();
		}
		else if (option == 0) //exit press 1
		{
			done = true;
		}

	}
	//=============MessageSystem End=========

	return 0;
}