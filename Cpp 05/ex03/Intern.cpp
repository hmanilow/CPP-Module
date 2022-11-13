#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &old)
{
	(void)old;
}

Intern& Intern::operator= (const Intern &old)
{
	(void)old;
	return *this;
}

Intern::~Intern() {}

static int getTypeOfForm(const std::string name)
{
	std::string type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
		if (name == type[i])
			return i;
	return -1;
}

static const std::string strToLow(const std::string str)
{
	std::string	ret;

	for (unsigned long i = 0; i < str.size(); i++)
		ret += tolower(str[i]);
	return (ret);
}

Form *Shrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Robot(const std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Presidential(const std::string target)
{
	return new PresidentialPardonForm(target);
}

typedef Form *(*type)(std::string type);

Form *Intern::makeForm(std::string title, std::string target)
{
	type form[3] = {&Shrubbery, &Robot, &Presidential};
	Form *formPtr = NULL;
	int typeOfForm = getTypeOfForm(strToLow(title));

	if (typeOfForm >= 0)
	{
		formPtr = form[typeOfForm](target);
		std::cout << "Intern create \"" << formPtr->getTitle() << "\"" << std::endl;
	}
	else
		std::cout << "Intern can't create \"" << title << "\"" << std::endl;
	return formPtr;
}