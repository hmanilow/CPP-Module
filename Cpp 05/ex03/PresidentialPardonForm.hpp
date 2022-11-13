#ifndef CPP_MODULE_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULE_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &yep);
		PresidentialPardonForm& operator= (const PresidentialPardonForm &yep);
		virtual ~PresidentialPardonForm();

		virtual void execute(const Bureaucrat &executor) const;
};

#endif
