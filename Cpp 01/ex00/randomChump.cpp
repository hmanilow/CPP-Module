/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:18 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:59:19 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie *newZomb = ft_newZombie(name);

	newZomb->announce();
	delete(newZomb);
}
