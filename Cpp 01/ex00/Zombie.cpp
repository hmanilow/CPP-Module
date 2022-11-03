/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:22 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:59:23 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "Deleted " << this->Name << std ::endl;
}

void Zombie::createName(std::string name)
{
	this->Name = name;
}

void Zombie::announce()
{
	std::cout << showName();
	std::cout << ": BraiiiiiiinnnzzzZ" << std::endl;
}

std::string Zombie::showName()
{
	return this->Name;
}
