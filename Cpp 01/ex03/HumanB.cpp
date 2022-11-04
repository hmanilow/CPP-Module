/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:00:31 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 20:00:32 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	gun = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &gun)
{
	this->gun = &gun;
}

void HumanB::attack()
{
	std::cout << this->name << " made an attack by " << gun->getType() << std::endl;
}
