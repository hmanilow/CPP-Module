/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:47:56 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:47:58 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap kratos("Kratos");
	ClapTrap odin("Odin");

	std::cout << std::endl;
	ScavTrap artheus("Artheus");
	FragTrap tor("Thor");
	std::cout << std::endl;

	DiamondTrap mimir("Mimir");
	mimir.get();

	std::cout << std::endl;
	mimir.whoAmI();
//	for(int i = 0; i < 11; i++)
//	{
//		kratos.attack("Odin");
//		if(i < 10)
//			odin.takeDamage(0);
//	}

	std::cout << std::endl;
//	odin.beRepaired(10);
//
//	std::cout << std::endl;
//	mimir = kratos;
//	mimir.beRepaired(10);
//
//	std::cout << std::endl;
//	artheus.guardGate();
//	artheus.attack("Thor");
//	tor.takeDamage(20);
//	tor.beRepaired(10);
//
//	std::cout << std::endl;
//	tor.highFivesGuys();
//	tor.attack("Thor");
//	artheus.takeDamage(30);
//	std::cout << std::endl;

	mimir.attack("kratos");
	std::cout << std::endl;
	return 0;
}