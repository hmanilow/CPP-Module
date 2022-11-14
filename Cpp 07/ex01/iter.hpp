#ifndef CPP_MODULE_ITER_HPP
#define CPP_MODULE_ITER_HPP

#include <iostream>

template <typename T1, typename T2, typename T3>

void iter(T1 *arr, T2 len, T3 (*func)(T1 elem))
{
	for(int i = 0; i < len; i++)
	{
		std::cout << (*func)(arr[i]);
		if(i != len - 1)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
}

#endif
