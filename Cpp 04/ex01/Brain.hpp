#ifndef CPP_MODULE_BRAIN_HPP
#define CPP_MODULE_BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &old);
		Brain& operator= (const Brain &old);
	protected:
		std::string ideas[100];
};


#endif
