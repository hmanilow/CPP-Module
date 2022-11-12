/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:05:28 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:05:31 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
        ~ScavTrap();
		ScavTrap& operator= (const ScavTrap &yep);
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &yep);

		void guardGate();
		void attack(const std::string &target);
};

#endif