#ifndef CPP_MODULE_MUTANTSTACK_HPP
#define CPP_MODULE_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack: public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {};
	MutantStack(const MutantStack &yep): std::stack<T>(yep) {};
	MutantStack &operator=(const MutantStack &yep)
	{
		std::stack<T>::operator=(yep);
		return *this;
	};
	~MutantStack(void){};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif
