#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("unnamed")
{
	grade = 150;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string str, int grade): name(str)
{
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &yep)
{
	this->grade = yep.grade;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &yep)
{
	if(this == &yep)
		this->grade = yep.grade;
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat's grade " << src.getGrage() << std::endl;
	return out;
}


std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrage() const
{
	return this->grade;
}


void Bureaucrat::downgrade()
{
	if(this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::upgrade()
{
	if(this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}