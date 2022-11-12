/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:08:25 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:08:26 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Constructor for noname" << std::endl;
	name = "noname";
	health = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "Constructor for " << str << std::endl;
	name = str;
	health = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &yep)
{
	std::cout << "Copy Constructor" << std::endl;
	this->name = yep.name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &yep)
{
	std::cout << "Overload = for " << this->name << std::endl;
	if(this == &yep)
		return *this;
	this->name = yep.name;
	this->health = yep.health;
	this->energy = yep.energy;
	this->damage = yep.damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor for " << this->name << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(energy > 0 && health > 0)
	{
		std::cout << name << " BOOM " << target << " for " << damage << " DAMAGE";
		std::cout << std::endl;
		energy--;
	}
	else
		std::cout << name << " couldn't attack" << std::endl;

}