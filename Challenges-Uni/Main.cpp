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
		if (option == 1) //Get answer from others
		{
			messages.GetAnswer();
		}
		else if (option == 2) //New Message
		{
			messages.SetMessage();
		}
		else if (option == 3)
		{
			messages.GetMessage(); //See your messages (0 based)
		}
		else if (option == 0) //exit
		{
			done = true;
		}

	}
	//=============MessageSystem End=========

	return 0;
}