/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:43 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:59:45 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *kenny = zombieHorde(5, "Kenny's gang");
	Zombie *lee = zombieHorde(3, "Lee's gang");

	for(int i = 0; i < 5; i++)
		kenny[i].announce();
	for(int i = 0; i < 3; i++)
		lee[i].announce();
	delete [] kenny;
	delete [] lee;
	return 0;
}
