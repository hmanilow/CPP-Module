/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:47:46 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:47:48 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Frag Constructor for noname" << std::endl;
	name = "noname";
	health = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "Frag Constructor for " << str << std::endl;
	name = str;
	health = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const FragTrap &yep)
{
	std::cout << "Frag copy Constructor" << std::endl;
	this->name = yep.name;
}

FragTrap& FragTrap::operator=(const FragTrap &yep)
{
	std::cout << "Frag overload= for " << this->name << std::endl;
	if(this == &yep)
		return *this;
	this->name = yep.name;
	this->health = yep.health;
	this->energy = yep.energy;
	this->damage = yep.damage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Destructor for " << this->name << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "/) *clap* (\\" << std::endl;
}