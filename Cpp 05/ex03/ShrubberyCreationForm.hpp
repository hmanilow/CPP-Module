#ifndef CPP_MODULE_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULE_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &yep);
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm &yep);
		virtual ~ShrubberyCreationForm();

		virtual void execute(const Bureaucrat &executor) const;
};


#endif
