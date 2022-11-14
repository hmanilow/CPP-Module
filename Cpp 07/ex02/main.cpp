#include "Array.hpp"

int main()
{
	Array<int> a_int(10);
	try
	{
        std::cout << a_int[5] << std::endl;
		std::cout << a_int[12] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
    std::cout << std::endl;

	unsigned int i = 0;
	Array<char> a_char(10);
	for(i = 0; i < a_char.size(); i++)
		a_char[i] = 'A' + i;
	try
	{
	    for(i = 0; i < a_char.size(); i++)
		    std::cout << a_char[i] << " = arr[" << i << "]" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << std::endl;
    std::cout << std::endl;

	i = 0;
	Array<double> a_double(10);
	for(i = 0; i < a_double.size(); i++)
		a_double[i] = (rand() % 100)+0.05;
	try
	{
		for(i = 0; i < a_double.size(); i++)
			std::cout << a_double[i] << " = arr[" << i << "]" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
    std::cout << std::endl;

    try
	{
        Array<std::string> a_str(2);
		
	    a_str[0] = "hello";
	    a_str[1] = "world";
		Array<std::string> a_str_cp(a_str);
		std::cout << "String: " << a_str[0] << ' ' << a_str[1] << std::endl;
		std::cout << "Copy: " << a_str_cp[0] << ' ' << a_str_cp[1] << std::endl;
		std::cout << a_str[5] << std::endl;
	}
    catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

