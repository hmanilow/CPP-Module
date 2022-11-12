#include "Animal.hpp"

//Animal::Animal()
//{
//	type = "Animal";
//	std::cout << "Animal Default constructor" << std::endl;
//}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

//Animal::Animal(const Animal &yep)
//{
//	std::cout << "Animal Copy constructor" << std::endl;
//	this->type = yep.type;
//}

//Animal& Animal::operator= (const Animal &yep)
//{
//	if (this != &yep)
//		this->type = yep.type;
//	return *this;
//}

void Animal::makeSound() const
{
	std::cout << "Abstact animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
