/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:58:47 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:58:50 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_PHONEBOOK_HPP
#define CPP_MODULE_PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int 	ind;
	public:
		PhoneBook();
		~PhoneBook(){
			std::cout << "Class isnt working" << std::endl;
		};
		void	add();
		void	search();
		void	view(int n);
		void	ft_info(int i);
};


#endif
