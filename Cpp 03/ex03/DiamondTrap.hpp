/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:47:41 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:47:43 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_DIAMONDTRAP_HPP
#define CPP_MODULE_DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string str);
		DiamondTrap(const DiamondTrap &yep);
		DiamondTrap& operator= (const DiamondTrap &yep);

		void whoAmI();
		void get();
		void attack(const std::string &target);
	private:
		std::string name;
};


#endif
