#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>


template <typename T>
void test(T& cont, typename T::iterator (*easyfind)(T& a, int target), int target)
{
	try
	{
		std::cout << *easyfind(cont, target) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::vector<int> v;
	std::deque<int> d;
	std::list<int>	l;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}
	v.push_back(0);
	d.push_back(0);
	l.push_back(0);
	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±found±±±±±±±±±±±±±±±±±±±±" << std::endl;
	std::cout << "vector: ";
	test(v, easyfind, 0);
	std::cout << "deque: ";
	test(d, easyfind, 2);
	std::cout << "list: ";
	test(l, easyfind, 1);
	std::cout << "±±±±±±±±±±±±±±±±±±±±±±not found±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	std::cout << "vector: ";
	test(v, easyfind, 11);
	std::cout << "deque: ";
	test(d, easyfind, 10);
	std::cout << "list: ";
	test(l, easyfind, -1);
	return 0;
}
