/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:50:38 by hmanilow          #+#    #+#             */
/*   Updated: 2022/11/13 15:50:39 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): title("untitled"), gradeToSign(150), gradeToExecute(150)
{
	isSigned = false;
}

Form::Form(const std::string title, int toSign, int toExecute): title(title), \
								gradeToSign(toSign),gradeToExecute(toExecute)
{
	isSigned = false;
}

Form::Form(const Form &yep): title(yep.title), gradeToSign(yep.gradeToSign), \
											gradeToExecute(yep.gradeToExecute)
{
	this->isSigned = yep.isSigned;
}

Form& Form::operator= (const Form &yep)
{
	if(this != &yep)
		this->isSigned = yep.isSigned;
	return *this;
}

Form::~Form() {}


std::ostream& operator<< (std::ostream &out, const Form &src)
{
	std::string isSigned = "False";
	if(src.formIsIsgned())
		isSigned = "True";
	out << "\"" << src.getTitle() << "\" ± isSing: " << isSigned << " ± toSign: ";
	out << src.getToSign() << " ± toExecute: " << src.getToExecute() << std::endl;
	return out;
}


std::string Form::getTitle() const
{
	return this->title;
}

int Form::getToSign() const
{
	return this->gradeToSign;
}

int Form::getToExecute() const
{
	return this->gradeToExecute;
}

bool Form::formIsIsgned() const
{
	return this->isSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrage() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}
