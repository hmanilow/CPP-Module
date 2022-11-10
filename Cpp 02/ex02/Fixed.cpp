/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:52:10 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/10 21:52:14 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	valueF = 0;
}

Fixed::Fixed(const Fixed &yep)
{

	this->valueF = yep.valueF;
}

Fixed::~Fixed() {}

Fixed::Fixed(const int val)
{
	valueF = val << bits;
}

Fixed::Fixed(const float val)
{
	valueF = roundf(val * (1 << bits));
}

// math

float Fixed::operator+ (Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator- (Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator* (Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/ (Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

//incr/decr

Fixed Fixed::operator--()
{
	--this->valueF;
	return *this;
}

Fixed Fixed::operator++()
{
	++this->valueF;
	return *this;
}

Fixed Fixed::operator-- (int)
{
	Fixed t = *this;
	this->valueF--;
	return t;
}

Fixed Fixed::operator++ (int)
{
	Fixed t = *this;
	this->valueF++;
	return t;
}

//operator =
Fixed& Fixed::operator=(const Fixed &yep)
{
	if (this != &yep)
		this->valueF = yep.getRawBits();
	return *this;
}

//compare

bool Fixed::operator>= (Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<= (Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator< (Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator> (Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator!= (Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator== (Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

//old

int Fixed::getRawBits() const
{
	return this->valueF;
}

void Fixed::setRawBits(const int raw)
{
	this->valueF = raw;
}

int Fixed::toInt() const
{
	return this->valueF >> this->bits;
}

float Fixed::toFloat() const
{
	return ((float)this->valueF / (float)(1 << this->bits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

//minmax

const Fixed& Fixed::max(const Fixed &one, const Fixed &two)
{
	std::cout << "const Fixed& max || ";
	if(one.toFloat() >= two.toFloat())
		return one;
	return two;
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
	std::cout << "Fixed& max || ";
	if(one.toFloat() >= two.toFloat())
		return one;
	return two;
}

Fixed& Fixed::min(Fixed &one, Fixed &two)
{
	std::cout << "Fixed& min || ";
	if(one.toFloat() <= two.toFloat())
		return one;
	return two;
}

const Fixed& Fixed::min(const Fixed &one, const Fixed &two)
{
	std::cout << "const Fixed& min || ";
	if(one.toFloat() <= two.toFloat())
		return one;
	return two;
}
