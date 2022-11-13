#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
{
	protected:
		const std::string title;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form();
		virtual ~Form();
		Form(const std::string title, int toSign, int toExecute);
		Form(const Form &yep);
		Form& operator= (const Form &yep);

		void beSigned(Bureaucrat &bureaucrat);
		void beExecuted(const Bureaucrat &bureaucrat) const;

		bool formIsIsgned() const;
		std::string getTitle() const;
		int getToSign() const;
		int getToExecute() const;

		virtual void execute(const Bureaucrat &executor) const;

		class GradeTooHighException: public std::exception
		{
			const char *what() const throw()
			{
				return "Form::Grade Too High Exception";
			}
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw()
			{
				return "Form::Grade Too Low Exception";
			}
		};
		class NotSigned: public std::exception
		{
			const char *what() const throw()
			{
				return "Form is not signed";
			}
		};
};

std::ostream& operator<< (std::ostream &out, const Form &src);

#endif
