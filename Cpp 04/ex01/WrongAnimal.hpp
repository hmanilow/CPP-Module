#ifndef CPP_MODULE_WRONGANIMAL_HPP
#define CPP_MODULE_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &yep);
		WrongAnimal& operator= (const WrongAnimal &yep);

		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

#endif