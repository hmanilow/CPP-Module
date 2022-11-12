#ifndef CPP_MODULE_ANIMAL_HPP
#define CPP_MODULE_ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &yep);
		Animal &operator= (const Animal &yep);

		virtual void makeSound() const;
		virtual std::string getType() const;
	protected:
		std::string type;
};


#endif
