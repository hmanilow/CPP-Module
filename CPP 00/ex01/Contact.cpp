/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:33:01 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/02 21:33:04 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact(){}

int Contact::getIndex()
{
	return this->ind;
}

std::string Contact::getFName()
{
	return this->firstName;
}

std::string Contact::getLName()
{
	return this->lastName;
}

std::string Contact::getNname()
{
	return this->nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string Contact::getDSecret()
{
	return this->darkestSecret;
}

void Contact::setIndex(int ind)
{
	this->ind = ind;
}

void Contact::setFName(std::string str)
{
	this->firstName = str;
}

void Contact::setLName(std::string str)
{
	this->lastName = str;
}

void Contact::setNname(std::string str)
{
	this->nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void Contact::setDSecret(std::string str)
{
	this->darkestSecret = str;
}
