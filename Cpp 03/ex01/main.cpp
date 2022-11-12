/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:05:20 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/12 15:05:21 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap kratos("Kratos");
	ClapTrap odin("Odin");
	ClapTrap mimir;
	ScavTrap tor("Thor");

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
	tor.guardGate();
	return 0;
}