#ifndef CPP_MODULE_EASYFIND_HPP
#define CPP_MODULE_EASYFIND_HPP

#include <exception>

class ValueNotFoundException: public std::exception
{
	const char *what() const throw()
	{
		return "value not found";
	}
};

template <typename T>
typename T::iterator easyfind(T &a, int target)
{
	typename T::iterator iter = std::find(a.begin(), a.end(), target);
	if(iter == a.end())
		throw ValueNotFoundException();
	return iter;
}

#endif
