/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:33:24 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/02 21:33:27 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	std::string s;
	PhoneBook	PB;

	while (s != "EXIT")
	{
		std::cout << "   Choose command:   " << std::endl;
		std::cout << "ADD    SEARCH    EXIT" << std::endl;
		std::getline(std::cin, s);
		if (!(std::cin.eof()))
		{
			if (s == "ADD")
				PB.add();
			else if (s == "SEARCH")
				PB.search();
			else
				if (s != "EXIT")
					std::cout << "Ohh shit! The wrong command is entered " << std::endl;
		}
		else
			exit(1);
	}
	return 0;
}