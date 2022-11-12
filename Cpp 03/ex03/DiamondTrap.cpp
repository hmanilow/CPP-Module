/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:47:37 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:47:39 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond constructor for nn" << std::endl;
	name = "nn";
	ClapTrap::name = name + "_clap_name";
	health = FragTrap::health; //100
	energy = ScavTrap::energy; //50
	damage = FragTrap::damage; //30
}

DiamondTrap::DiamondTrap(std::string str)
{
	std::cout << "Diamond constructor for " << str << std::endl;
	name = str;
	ClapTrap::name = name + "_clap_name";
	health = FragTrap::health;
	energy = ScavTrap::energy; //50
	damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &yep)
{
	std::cout << "Diamond copy constructor" << std::endl;
	this->name = yep.name;
	this->health = yep.health;
	this->energy = yep.energy;
	this->damage = yep.damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &yep)
{
	std::cout << "Diamond overload = for " << this->name << std::endl;
	if(this == &yep)
		return *this;
	this->name = yep.name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor for " << this->name << std::endl;
}

void DiamondTrap::get()
{
	std::cout << std::endl << "name: " << this->name << std::endl;
	std::cout << "health: " << this->health << std::endl;
	std::cout << "energy: " << this->energy << std::endl;
	std::cout << "damage: " << this->damage << std::endl;
	std::cout << "stamin: " << ClapTrap::name << std::endl << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "whoAmI(): " << this->name << " || " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}