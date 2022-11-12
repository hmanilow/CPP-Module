/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:47:20 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:47:22 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor for nn" << std::endl;
    name = "nn";
    health = 10;
    energy = 10;
    damage = 10;
}

ClapTrap::ClapTrap(std::string str)
{
    std::cout << "Constructor for " << str << std::endl;
    name = str;
    health = 10;
    energy = 10;
    damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &yep)
{
    std::cout << "Copy cosntructor" << std::endl;
    this->name = yep.name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &yep)
{
    std::cout << "Overload = for " << this->name << std::endl;
    if (this == &yep)
        return *this;
    this->name = yep.name;
    this->health = yep.health;
    this->energy = yep.energy;
    this->damage = yep.energy;
    return *this;
 }

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor for " << this->name << std::endl << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (energy > 0 && health > 0)
    {
		std::cout << name << " attacked " << target << ", caused " << damage << " pt of damage";
		std::cout << std::endl;
		energy--;
	}
	else
		std::cout << name << " couldn't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " took damage of " << amount << " pts" << std::endl;
	health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && health > 0)
	{
		health += amount;
		energy--;
		std::cout << name << " be repaired of " << amount << " points" << std::endl;
	}
	else
		std::cout << name << " couldn't be repaired" << std::endl;
}