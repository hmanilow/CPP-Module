#include <iostream>
#include <limits.h>

void	toChar(char c)
{
	std::cout << "*char: '" << c << "'" <<std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void toInt(int a, int flag)
{
	char result = 0;
	if (isprint(a))
		result = a;
	if (!result)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << result << "'" << std::endl;
	if (flag)
		std::cout << "*int: out of range" << std::endl;
	else
		std::cout << "*int: " << a << std::endl;
	std::cout << "float: " << static_cast<float>(a) << std::endl;
	std::cout << "double: " << static_cast<double>(a) << std::endl;
}

void toFloat(float a)
{
	char result = 0;
	if (isprint(a))
		result = a;
	if (!result)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << result << "'" << std::endl;
	if (a < INT_MIN || a > INT_MAX)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(a) << std::endl;
	std::cout << "*float: " << a << std::endl;
	std::cout << "double: " << static_cast<double>(a) << std::endl;
}

void toDouble(double a)
{
	char result = 0;
	if (isprint(a))
		result = a;
	if (!result)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << result << "'" << std::endl;
	if (a < INT_MIN || a > INT_MAX)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(a) << std::endl;
	std::cout << "float: " << static_cast<float>(a) << std::endl;
	std::cout << "*double: " << a << std::endl;
}

void toPseudoLiteral(std::string a)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!a.compare("nan") || !a.compare("nanf"))
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (!a.compare("inf") || !a.compare("inff") || \
			!a.compare("+inf") || !a.compare("+inff"))
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (!a.compare("-inf") || !a.compare("-inff"))
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "write a value PLEASE" << std::endl;
	else
	{
		std::string a(argv[1]);
		size_t f = std::string::npos;
		if (!a.compare("inf") || !a.compare("inff") || \
			!a.compare("-inf") || !a.compare("-inff") || \
			!a.compare("+inf") || !a.compare("+inff") || \
			!a.compare("nan") || !a.compare("nanf"))
			toPseudoLiteral(a);
		else if (a.size() == 1 && !isdigit(a[0]))
			toChar(a[0]);
		else if (a.find('.') == f && (isdigit(a[0]) || isdigit(a[1])))
		{
			try
			{
				stoi(a);
			}
			catch(const std::exception& e)
			{
				toInt(stod(a), 1);
				return 0;
			}
			toInt(stoi(a), 0);
		}
		else if (a.back() == 'f' && a.find('.') != f && isdigit(a[a.find('.') + 1]))
			toFloat(stof(a));
		else if (a.find('.') != f && isdigit(a[a.find('.') + 1]))
			toDouble(stod(a));
		else
			std::cout << "wrong input" << std::endl;
	}
	return 0;
}
