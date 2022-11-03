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
		//~PhoneBook();
		void	add();
		void	search();
		void	view(int n);
		void	ft_info(int i);
};


#endif
