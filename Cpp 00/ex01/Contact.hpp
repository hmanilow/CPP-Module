#ifndef CPP_MODULE_CONTACT_HPP
#define CPP_MODULE_CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
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
