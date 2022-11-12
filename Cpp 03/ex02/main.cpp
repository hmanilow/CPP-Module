/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:08:21 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:08:23 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap kratos("Kratos");
	ClapTrap odin("Odin");

	std::cout << std::endl;
	ScavTrap artheus("Artheus");
	FragTrap tor("Thor");
	std::cout << std::endl;

	ClapTrap mimir;

	std::cout << std::endl;

	for(int i = 0; i < 11; i++)
	{
		kratos.attack("Odin");
		if(i < 10)
			odin.takeDamage(0);
	}

	std::cout << std::endl;
	odin.beRepaired(10);

	std::cout << std::endl;
	mimir = kratos;
	mimir.beRepaired(10);

	std::cout << std::endl;
	artheus.guardGate();
	artheus.attack("Thor");
	tor.takeDamage(20);
	tor.beRepaired(10);

	std::cout << std::endl;
	tor.highFivesGuys();
	tor.attack("Thor");
	artheus.takeDamage(30);
	std::cout << std::endl;
	return 0;
}