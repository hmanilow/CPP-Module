#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	Animal *a[10];

	for(int i = 0; i < 10; i++)
	{
		std::cout << "±±±±±±±±±±±±±±±±±±±±±±±"<< i <<"±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		if (i < 5)
			a[i] = new Cat();
		else
			a[i] = new Dog();
	}

	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < 10; i++)
	{
		std::cout << i << ") ";
		std::cout << a[i]->getType() << " said ";
		a[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "±±±±±±±±±±±±±±±±±±±±±±±"<< i <<"±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		delete a[i];
	}

	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	return 0;
}