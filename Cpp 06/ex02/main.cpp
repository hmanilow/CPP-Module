#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int randRtn = std::rand();

	if (randRtn % 3 == 0)
	{
		std::cout << "Generate A" << std::endl;
		return new A;
	}
	else if (randRtn % 2 == 0)
	{
		std::cout << "Generate B" << std::endl;
		return new B;
	}
	std::cout << "Generate C" << std::endl;
	return new C;
}

void identify(Base *p)
{
	if (!p)
		return ;
	if (dynamic_cast<A *>(p))
		std::cout << "this is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "this is B" << std::endl;
	else if(dynamic_cast<C *>(p))
		std::cout << "this is C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &temp = dynamic_cast<A &>(p);
		std::cout << "this is A" << std::endl;
		(void)temp;
	}
	catch (std::exception &e) {}

	try
	{
		B &temp = dynamic_cast<B &>(p);
		std::cout << "this is B" << std::endl;
		(void)temp;
	}
	catch (std::exception &e) {}

	try
	{
		C &temp = dynamic_cast<C &>(p);
		std::cout << "this is C" << std::endl;
		(void)temp;
	}
	catch (std::exception &e) {}
}

int main() {

	std::srand(time(NULL));

	Base *first = generate();
	Base *second = generate();
	Base *third = generate();

	identify(*first);
	identify(first);
	identify(*second);
	identify(second);
	identify(*third);
	identify(third);

	delete first;
	delete second;
	delete third;
}
