/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:42:54 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/10 19:42:56 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "debug" << std::endl;
}

void Harl::info()
{
	std::cout << "info" << std::endl;
}

void Harl::warning()
{
	std::cout << "warning" << std::endl;
}

void Harl::error()
{
	std::cout << "error" << std::endl;
}

void Harl::complain(std::string level)
{
	void(Harl::*functions[])() = {&Harl::debug, &Harl::info,
								  &Harl::warning, &Harl::error,
	};

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "WTF is  \"" << level  << "\"?"<< std::endl;;
}
