#ifndef CPP_MODULE_WHATEVER_HPP
#define CPP_MODULE_WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(const T &a, const T &b)
{
	if(a > b)
		return a;
	return b;
}

template <typename T>
T min(const T &a, const T &b)
{
	if(a < b)
		return a;
	return b;
}

#endif
