/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:11:27 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/04 18:11:30 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i;
		char a;
		std::string tmp;
		std::ifstream file(argv[1]);
		std::string str1(argv[2]);
		std::string str2(argv[3]);

		if (!std::string(argv[1]).length() || !str1.length() || !str2.length() || !file.is_open())
		{
			std::cout << "ARG ERROR 2" << std::endl;
			return 1;
		}
		while (file.get(a))
			tmp.push_back(a);
		while ((i = tmp.find(str1)) != -1 && str1 != str2)
		{
			tmp.erase(i, str1.length());
			tmp.insert(i, str2);
		}
		std::ofstream outfile(std::string(argv[1]) + ".replace");
		outfile << tmp;
		file.close();
		outfile.close();
	}
	else
		std::cout << "ARG ERROR!" << std::endl;
	return 0;
}
