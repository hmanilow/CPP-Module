/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:50:42 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/13 15:50:44 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string title;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form();
		~Form();
		Form(const std::string title, int toSign, int toExecute);
		Form(const Form &yep);
		Form& operator= (const Form &yep);

		void beSigned(Bureaucrat &bureaucrat);

		bool formIsIsgned() const;
		std::string getTitle() const;
		int getToSign() const;
		int getToExecute() const;

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
};

std::ostream& operator<< (std::ostream &out, const Form &src);

#endif
