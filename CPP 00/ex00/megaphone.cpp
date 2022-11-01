#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			std::string s = argv[i];
			for(int j = 0; j < (int)s.length(); j++)
			{
				char a = toupper(s[j]);
				std::cout << a;
			}
		}
	}
}
