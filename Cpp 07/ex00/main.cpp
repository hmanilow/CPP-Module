#include "whatever.hpp"

void subjCheck()
{
	std::cout << "------------------subjects---------------------" << std::endl;
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;
}

void myCheck()
{
	std::cout << "------------------my check---------------------" << std::endl;
	int a = 5, b = 9;
	double c = 42.42, d = -606.909;

	std::cout << "before swap: a == " << a << "; b == " << b << std::endl;
	swap(a, b);
	std::cout << "after swap: a == " << a << "; b == " << b << std::endl;
	std::cout << "max (a, b) == " << max(a, b) << std::endl;
	std::cout << "min (a, b) == " << min(a, b) << std::endl << std::endl;


	std::cout << "before swap: c == " << c << "; d == " << d << std::endl;
	swap(c, d);
	std::cout << "after swap: c == " << c << "; d == " << d << std::endl;
	std::cout << "max (c, d) == " << max(c, d) << std::endl;
	std::cout << "min (c, d) == " << min(c, d) << std::endl << std::endl;
}

int main()
{
	subjCheck();
	myCheck();
	return 0;
}