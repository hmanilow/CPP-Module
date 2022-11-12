#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &yep);
		Dog& operator= (const Dog &yep);

		virtual void makeSound() const;
		virtual std::string getType() const;
};


#endif
