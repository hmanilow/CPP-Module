/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:33:38 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/02 21:33:41 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	ind = 0;
}

PhoneBook::~PhoneBook(){}

static void ft_empty(std::string s)
{
	while(s.empty())
	{
		std::cout << "Empty" << std::endl;
		std::getline(std::cin, s);
	}
}

void PhoneBook::add()
{
	int i = 0;
	std::string s;

	std::cout << "Index of new contact" << i + 1 << std::endl;
	contacts[i].setIndex(i + 1);
	std::cout << "First NAme:" << std::endl;
	std::getline(std::cin, s);
	if(std::cin.eof())
		exit(1);
	ft_empty(s);
	contacts[i].setFName(s);

	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, s);
	if(std::cin.eof())
		exit(1);
	contacts[i].setLName(s);

	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, s);
	if(std::cin.eof())
		exit(1);
	contacts[i].setNname(s);

	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, s);
	if(std::cin.eof())
		exit(1);
	contacts[i].setPhoneNumber(s);

	std::cout << "Darkest secret:" << std::endl;
	std::getline(std::cin, s);
	if(std::cin.eof())
		exit(1);
	contacts[i].setDSecret(s);
	std::cout << std::endl;

	i++;
	if(i == 8)
		i = 0;
	else
	{
		if(i == 0)
			for(; contacts[i].getIndex() && i < 8;)
				i++;
	}
}

void PhoneBook::ft_info(int i)
{
	std::cout << "index: " << contacts[i].getIndex() << std::endl;
	std::cout << "first name: " << contacts[i].getFName() << std::endl;
	std::cout << "last name: " << contacts[i].getLName() << std::endl;
	std::cout << "nickname: " << contacts[i].getNname() << std::endl;
	std::cout << "phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << contacts[i].getDSecret() << std::endl;
	std::cout << std::endl;
}

static void print_s(std::string s)
{
	if (s.size() > 10)
		std::cout << std::setw(9) << s.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << s;
	std::cout << "|";
}

void PhoneBook::search()
{
	std::string s;
	int max, ind;

	std::cout << "     index|";
	std::cout << " firstName|";
	std::cout << "  lastName|";
	std::cout << "  nickname|" << std::endl;
	for(int i = 1;i <= 44; i++)
	{
		if (i % 11 == 0 && i)
			std::cout << "|";
		else
			std::cout << "-";
	}
	std::cout << std::endl;
	for(int i = 0; contacts[i].getIndex() > 0 && contacts[i].getIndex() < 9; i++)
	{
		std::cout << std::setw(10) << contacts[i].getIndex() << "|";
		s = contacts[i].getFName();
		print_s(s);
		s = contacts[i].getLName();
		print_s(s);
		s = contacts[i].getNname();
		print_s(s);
		std::cout << std::endl;
		max = i + 1;
	}
	if(contacts[0].getIndex())
	{
		std::cout << "Choose ind" << std::endl;
		std::getline(std::cin, s);
		ind = atoi(s.c_str());
		while(ind < 1 || ind > max)
		{
			if (std::cin.eof())
				exit(1);
			std::cout << "Out of range" << std::endl;
			std::getline(std::cin, s);
			ind = atoi(s.c_str());
		}
		ft_info(ind - 1);
	}
}
