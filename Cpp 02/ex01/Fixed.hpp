#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &yep);
	Fixed(const int val);
	Fixed(const float val);
	Fixed& operator= (const Fixed &yep);
	int getRawBits() const;
	void setRawBits(int const raw);
	int toInt() const;
	float toFloat() const;
private:
	int valueF;
	static const int bits = 8;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
