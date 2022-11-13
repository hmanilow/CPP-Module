#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("untitled", 72, 45)
{
	isSigned = false;
	target = "untitled_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{
	isSigned = false;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &yep): Form(yep.title, 72, 45)
{
	this->isSigned = yep.isSigned;
	this->target = yep.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm &yep)
{
	if(this != &yep)
	{
		this->isSigned = yep.isSigned;
		this->target = yep.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->Form::beExecuted(executor);
	std::cout << "SOME DRILLING NOISES!!" << std::endl;

	srand(time(0));
	if((int)rand() % 2)
		std::cout << "Robotomy seccessed" << std::endl;
	else
		std::cout << "Robotomy gone wrong" << std::endl;
}