#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat senior("senior", 1);
	Bureaucrat middle("middle", 50);
	Bureaucrat junior("junior", 100);
	Bureaucrat intern("intern", 150);

	ShrubberyCreationForm tree("tree");
	RobotomyRequestForm robotomy("robotomy");
	PresidentialPardonForm pardon("pardon");

	std::cout << std::endl << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	std::cout << intern << junior << tree << std::endl;

	intern.singForm(tree);
	junior.executeForm(tree);
	junior.singForm(tree);
	intern.executeForm(tree);
	junior.executeForm(tree);
	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;

	std::cout << std::endl << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	std::cout << junior << middle << senior << robotomy << std::endl;

	junior.singForm(robotomy);
	junior.executeForm(robotomy);
	middle.executeForm(robotomy);
	middle.singForm(robotomy);
	junior.executeForm(robotomy);
	middle.executeForm(robotomy);
	std::cout << std::endl;
	senior.executeForm(robotomy);
	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;

	std::cout << std::endl << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	std::cout << middle << senior << pardon << std::endl;

	middle.executeForm(pardon);
	middle.singForm(pardon);
	senior.singForm(pardon);
	middle.executeForm(pardon);
	std::cout << std::endl;
	senior.executeForm(pardon);
	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	return 0;
}
