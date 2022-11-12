#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &yep)
{
	std::cout << "WrongCat Copy constructor" << std::endl;
	this->type = yep.type;
}

WrongCat& WrongCat::operator= (const WrongCat &yep)
{
	if (this != &yep)
		this->type = yep.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "cat wrong mp3" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}
