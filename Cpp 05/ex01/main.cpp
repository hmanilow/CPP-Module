/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:50:47 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/13 15:50:50 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bur("bur", 4);
	Form one("bur 1", 3, 1);
	Form two("bur 2", 5, 1);
	Form three("bur 3", 4, 1);

	std::cout << std::endl;

	bur.singForm(one);
	std::cout << bur << one << std::endl;
	bur.singForm(two);
	std::cout << bur << two << std::endl;
	bur.singForm(three);
	std::cout << bur << three << std::endl;
	return 0;
}
