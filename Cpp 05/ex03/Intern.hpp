#ifndef CPP_MODULE_INTERN_HPP
#define CPP_MODULE_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern &old);
		Intern& operator= (const Intern &old);
		~Intern();

		Form *makeForm(std::string title, std::string target);
};


#endif
