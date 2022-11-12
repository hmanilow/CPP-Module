#ifndef CPP_MODULE_WRONGCAT_HPP
#define CPP_MODULE_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &yep);
		WrongCat& operator= (const WrongCat &yep);

		virtual void makeSound() const;
		std::string getType() const;
};


#endif
