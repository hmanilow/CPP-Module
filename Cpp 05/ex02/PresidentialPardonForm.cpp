#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("untitled", 25, 5)
{
	isSigned = false;
	target = "untitled_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5)
{
	isSigned = false;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &yep): Form(yep.title, 25, 5)
{
	this->isSigned = yep.isSigned;
	this->target = yep.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm &yep)
{
	if(this != &yep)
	{
		this->isSigned = yep.isSigned;
		this->target = yep.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->Form::beExecuted(executor);
	std::cout << "\"" << this->target << "\" has been pardoned by Axelerod" << std::endl;
}