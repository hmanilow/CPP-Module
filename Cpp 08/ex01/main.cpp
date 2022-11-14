#include "Span.hpp"

void checkSubj()
{
	Span s = Span(5);

	s.addNumber(6);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);

	try
	{
		s.addNumber(13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
}

void my()
{
	Span s = Span(20000);

	for(int i = 0; i < 20000; i++)
		s.addNumber(std::rand());
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	Span lol(1);
	lol.addNumber(1);
	try
	{
		std::cout << lol.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << lol.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	Span b(10);
	std::vector<int> tmp;
	for(int i = 0; i < 30; i++)
		tmp.push_back(std::rand() % 100);
	b.addNumber(tmp);
	for(int i = 0; i < 10; i++)
	{
		std::cout << tmp[i];
		if(i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
}

int main()
{
	std::cout << "±±±±±±±±±±±±±±±±±±subj check±±±±±±±±±±±±±±±±±" << std::endl;
	std::srand(time(NULL));
	checkSubj();
	std::cout << "±±±±±±±±±±±±±±±±±±my check±±±±±±±±±±±±±±±±±±" << std::endl;
	my();
	return 0;
}
