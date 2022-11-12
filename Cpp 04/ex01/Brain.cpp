#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &yep)
{
	std::cout << "Brain Copy constructor" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = yep.ideas[i];
}

Brain& Brain::operator= (const Brain &yep)
{
	std::cout << "Brain Overload =" << std::endl;
	if(this != &yep)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = yep.ideas[i];
	return *this;
}