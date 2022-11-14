#include "Span.hpp"

Span::Span()
{
	arrSize = 0;
}

Span::Span(unsigned int n)
{
	arrSize = n;
}

Span::Span(const Span &old)
{
	this->arrSize = old.arrSize;
	if(this->arrSize != 0)
		for(unsigned int i = 0; i < this->arrSize; i++)
			this->arr.push_back(old.arr[i]);
}

Span &Span::operator=(const Span &old)
{
	if(this != &old)
	{
		this->arrSize = old.arrSize;
		if(this->arrSize != 0)
			for(unsigned int i = 0; i < this->arrSize; i++)
				this->arr.push_back(old.arr[i]);
	}
	return *this;
}

Span::~Span()
{

}

void Span::addNumber(int n)
{
	if(this->arr.size() >= this->arrSize)
		throw FullArrayException();
	else
		this->arr.push_back(n);
}

void Span::addNumber(std::vector<int> src)
{
	std::vector<int>::iterator begin = src.begin();
	std::vector<int>::iterator end = src.end();

	for(unsigned int i = 0; i < this->arrSize && begin != end; i++)
		this->addNumber(*begin++);
}


int Span::shortestSpan()
{
	if(this->arr.size() < 2)
		throw TooFewElementsException();
	std::vector<int> sortArr(this->arr);
	std::sort(sortArr.begin(), sortArr.end());

	int res = sortArr[1] - sortArr[0];
	for(unsigned int i = 2; i < this->arrSize; i++)
		if(res > sortArr[i] - sortArr[i - 1])
			res = sortArr[i] - sortArr[i - 1];
	return res;
}

int Span::longestSpan()
{
	if(this->arr.size() < 2)
		throw TooFewElementsException();
	return *std::max_element(this->arr.begin(), this->arr.end()) - *std::min_element(this->arr.begin(), this->arr.end());
}
