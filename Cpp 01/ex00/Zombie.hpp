/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:31 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:59:34 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_ZOMBIE_HPP
#define CPP_MODULE_ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void announce();
		void createName(std::string name);
		std::string showName();
	private:
		std::string Name;
};


#endif
