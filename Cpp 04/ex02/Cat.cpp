#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Def constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &yep)
{
	std::cout << "Cat Copy constructor" << std::endl;
	this->type = yep.type;
}

Cat& Cat::operator= (const Cat &yep)
{
	if (this != &yep)
		this->type = yep.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MYAU MYAU NIGGA"<< std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}