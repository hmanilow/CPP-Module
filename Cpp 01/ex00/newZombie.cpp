/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:14 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:59:15 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *ft_newZombie(std::string name)
{
	Zombie *newz = new(Zombie);

	newz->createName(name);
	return newz;
}
