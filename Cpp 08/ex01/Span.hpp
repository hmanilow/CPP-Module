#ifndef CPP_MODULE_SPAN_HPP
#define CPP_MODULE_SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int arrSize;
	std::vector<int> arr;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &old);
	Span &operator=(const Span &old);
	~Span();

	void addNumber(int n);
	void addNumber(std::vector<int> src);
	int shortestSpan();
	int longestSpan();

	class TooFewElementsException: public std::exception
	{
		const char *what() const throw()
		{
			return "need more elements in span";
		}
	};

	class FullArrayException: public std::exception
	{
		const char *what() const throw()
		{
			return "span is full";
		}
	};
};

#endif
