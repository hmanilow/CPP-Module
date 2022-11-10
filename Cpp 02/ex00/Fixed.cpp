/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:51:32 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/10 21:51:34 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	val = 0;
	std::cout << "Defaul constructor" << std::endl;
}

Fixed::Fixed(const Fixed &yep)
{
	std::cout << "Copy constructor" << std::endl;
	this->val = yep.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &yep)
{
	std::cout << "Copy assigment operator" << std::endl;
	if (this != &yep)
		this->val = yep.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "get raw bits" << std::endl;
	return this->val;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "set Raw Bits" << std::endl;
	this->val = raw;
}
