#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &yep);
		Cat& operator= (const Cat &yep);

		virtual void makeSound() const;
		virtual std::string getType() const;
	private:
		Brain *brain;
};


#endif
