#include "Bureaucrat.hpp"

Bureaucrat createBureaucrat(std::string name, int grade)
{
	try
	{
		Bureaucrat bureaucrat(name, grade);
		return bureaucrat;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return Bureaucrat();
}

void createAndUpgrade()
{
	Bureaucrat b("fuckov", 10);
	std::cout << b;

	for(int i = 0; i < 10; i++)
	{
		try
		{
			b.upgrade();
			std::cout << b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void createAndDowngrade()
{
	Bureaucrat b("khussein", 141);
	std::cout << b;

	for(int i = 0; i < 10; i++)
	{
		try
		{
			b.downgrade();
			std::cout << b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

int main()
{
	std::cout << std::endl << createBureaucrat("kuzmichev", -1);
	std::cout << std::endl << createBureaucrat("gatov", 1);
	std::cout << std::endl << createBureaucrat("elizarov", 50);
	std::cout << std::endl << createBureaucrat("latipov", 150);
	std::cout << std::endl << createBureaucrat("gets", 151);
	std::cout << "------------------------------------------" << std::endl;

	createAndUpgrade();
	std::cout << "------------------------------------------" << std::endl;

	createAndDowngrade();
	std::cout << "------------------------------------------" << std::endl;

	return 0;
}
