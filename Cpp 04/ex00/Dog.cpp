#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Default constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &yep)
{
	std::cout << "Dog Copy constructor" << std::endl;
	this->type = yep.type;
}

Dog& Dog::operator= (const Dog &yep)
{
	if (this != &yep)
		this->type = yep.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woooooo" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}
