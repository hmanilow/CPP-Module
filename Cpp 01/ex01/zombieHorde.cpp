/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:00:05 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 20:00:07 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *gang = new Zombie[n];
	for(int i = 0; i < n; i++)
		gang[i].createName(name);
	return gang;
}
