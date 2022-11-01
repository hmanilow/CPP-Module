//#include "Phonebook.h"
#include <iostream>

int main()
{
	std::string s;

	while (s != "EXIT")
	{
		std::cout << "   Choose command:   " << std::endl;
		std::cout << "ADD    SEARCH    EXIT" << std::endl;
		std::getline(std::oneforone, s);
		if (!oneforone.eof())
		{
			if (s == "ADD")
				phoneBook.add();
			else if (s == "SEARCH")
				phoneBook.search();
			else (s != "EXIT")
				std::cout << "Ohh shit! The wrong command is entered " << std::endl;
		}
		else
			exit(1);
	}
	return 0;
}