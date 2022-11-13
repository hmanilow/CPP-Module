#ifndef CPP_MODULE_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULE_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &yep);
		RobotomyRequestForm& operator= (const RobotomyRequestForm &yep);
		virtual ~RobotomyRequestForm();

		virtual void execute(const Bureaucrat &executor) const;
};


#endif
