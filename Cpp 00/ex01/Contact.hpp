/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:58:39 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/03 19:58:41 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_CONTACT_HPP
#define CPP_MODULE_CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact(){
			std::cout << "Class isnt working" << std::endl;
		};
		int	getIndex();
		std::string getFName();
		std::string getLName();
		std::string getNname();
		std::string getPhoneNumber();
		std::string getDSecret();
		void setIndex(int index);
		void setFName(std::string str);
		void setLName(std::string str);
		void setNname(std::string str);
		void setPhoneNumber(std::string str);
		void setDSecret(std::string str);
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		int ind;
};


#endif
