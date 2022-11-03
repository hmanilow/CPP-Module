/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:08 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:59:09 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *kenny;

	kenny = ft_newZombie("Kenny");
	kenny->announce();
	randomChump("Lee");
	delete(kenny);
	return 0;
}