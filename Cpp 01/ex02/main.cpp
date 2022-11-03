/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:00:13 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 20:00:17 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory addr of the str: " << &str << std::endl;
	std::cout << "Memory addr by strPTR: " << stringPTR << std::endl;
	std::cout << "Memory addr by strREF: " << &stringREF << std::endl;
	std::cout << "String: " << str << std::endl;
	std::cout << "Value of strPTR: " << *stringPTR << std::endl;
	std::cout << "Value of strREF: " << stringREF << std::endl;
	return 0;
}
