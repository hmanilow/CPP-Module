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

		bool operator== (Fixed fixed) const;
		bool operator!= (Fixed fixed) const;
		bool operator< (Fixed fixed) const;
		bool operator> (Fixed fixed) const;
		bool operator<= (Fixed fixed) const;
		bool operator>= (Fixed fixed) const;

		float operator+ (Fixed fixed) const;
		float operator- (Fixed fixed) const;
		float operator* (Fixed fixed) const;
		float operator/ (Fixed fixed) const;

		Fixed operator++ ();
		Fixed operator-- ();
		Fixed operator++ (int);
		Fixed operator-- (int);

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;

		static Fixed &min(Fixed &one, Fixed &two);
		static const Fixed &min(const Fixed &one, const Fixed &two);
		static Fixed &max(Fixed &one, Fixed &two);
		static const Fixed &max(const Fixed &one, const Fixed &two);
	private:
		int valueF;
		static const int bits = 8;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
