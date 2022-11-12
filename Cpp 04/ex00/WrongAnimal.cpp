#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &yep)
{
	std::cout << "WrongAnimal Copy constructor" << std::endl;
	this->type = yep.type;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &yep)
{
	if (this != &yep)
		this->type = yep.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Abstract sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
