#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("untitled", 145, 137)
{
	isSigned = false;
	target = "untitled_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137)
{
	isSigned = false;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &yep): Form(yep.title, 145, 137)
{
	this->isSigned = yep.isSigned;
	this->target = yep.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm &yep)
{
	if(this != &yep)
	{
		this->isSigned = yep.isSigned;
		this->target = yep.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	ofs;

	this->Form::beExecuted(executor);
	ofs.open(((target + "_shrubbery").c_str()), std::ofstream::out | std::ofstream::app);
	if (!ofs.good())
		ofs.close();
	ofs << "                                              ." << std::endl;
	ofs << "                                   .         ;" << std::endl;
	ofs << "      .              .              ;%     ;;" << std::endl;
	ofs << "        ,           ,                :;%  %;" << std::endl;
	ofs << "         :         ;                   :;%;'     .," << std::endl;
	ofs << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	ofs << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	ofs << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	ofs << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	ofs << "             `@%.  `;@%.      ;@@%;" << std::endl;
	ofs << "               `@%%. `@%%    ;@@%;" << std::endl;
	ofs << "                 ;@%. :@%%  %@@%;" << std::endl;
	ofs << "                   %@bd%%%bd%%:;" << std::endl;
	ofs << "                     #@%%%%%:;;" << std::endl;
	ofs << "                     %@@%%%::;" << std::endl;
	ofs << "                     %@@@%(o);  . '" << std::endl;
	ofs << "                     %@@@o%;:(.,'" << std::endl;
	ofs << "                 `.. %@@@o%::;" << std::endl;
	ofs << "                    `)@@@o%::;" << std::endl;
	ofs << "                     %@@(o)::;" << std::endl;
	ofs << "                    .%@@@@%::;" << std::endl;
	ofs << "                    ;%@@@@%::;." << std::endl;
	ofs << "                   ;%@@@@%%:;;;." << std::endl;
	ofs << "               ...;%@@@@@%%:;;;;,.." << std::endl << std::endl;
	ofs.close();
}