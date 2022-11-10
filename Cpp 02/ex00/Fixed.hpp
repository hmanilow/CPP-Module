#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &yep);
		Fixed& operator= (const Fixed &yep);
		int getRawBits() const;
		void setRawBits(int const raw);
	private:
		int val;
		static const int bits = 8;
};


#endif
