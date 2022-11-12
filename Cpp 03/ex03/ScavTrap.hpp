/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:48:08 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:48:13 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
        ~ScavTrap();
		ScavTrap& operator= (const ScavTrap &yep);
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &yep);

		void guardGate();
		void attack(const std::string &target);
	protected:
		unsigned int energy;
};

#endif