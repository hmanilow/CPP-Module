/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:51:48 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/10 21:51:49 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	valueF = 0;
	std::cout << "Defaul constructor" << std::endl;
}

Fixed::Fixed(const Fixed &yep)
{
	std::cout << "Copy constructor" << std::endl;
	this->valueF = yep.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}

Fixed::Fixed(const int val)
{
	valueF = val << bits;
	std::cout << "int constructor" << std::endl;
}

Fixed::Fixed(const float val)
{
	valueF = roundf(val * (1 << bits));
	std::cout << "float constructor" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed &yep)
{
	std::cout << "Copy assigment operator" << std::endl;
	if (this != &yep)
		this->valueF = yep.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	//std::cout << "get raw bits" << std::endl;
	return this->valueF;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "set Raw Bits" << std::endl;
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
