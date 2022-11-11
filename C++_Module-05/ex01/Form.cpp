/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:45:51 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 16:31:21 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExec) : name(name), sign_grade(gradeToSign),
	exec_grade(gradeToExec)
{
	// std::cout << "name constructor called" << std::endl;
}

Form::Form(void) : name(""), _signed(false), sign_grade(lowestGrade),
	exec_grade(lowestGrade)
{
	std::cout << "Default constructor called" << std::endl;
}

Form::~Form(void)
{

}

Form::Form(const std::string& name, int gradeToSign) : name(name), sign_grade(gradeToSign), exec_grade(0)
{
	if ( sign_grade < highestGrade )
        throw Form::GradeTooHighException();
    if ( sign_grade > lowestGrade )
        throw Form::GradeTooLowException();
}

Form &Form::operator= (const Form& form)
{
	_signed = form.isSigned();
	return (*this);
}

Form::Form(const Form& other) : name(other.getName()), _signed(other.isSigned()),
	sign_grade(other.getSignGrade()), exec_grade(other.getExecGrade())
{
	std::cout << "Copy constructor called" << std::endl;
}

void	Form::checkGrade(void) const
{
	if (this->sign_grade < highestGrade
		|| this->exec_grade < highestGrade)
		throw GradeTooHighException();
	else if (this->sign_grade > lowestGrade
		|| this->exec_grade > lowestGrade)
		throw GradeTooLowException();
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
    if ( bureaucrat.getGrade() > sign_grade ) {
        _signed = false;
		throw Form::GradeTooLowException();
	}
    _signed = true;
}

std::string	Form::getName(void) const
{
	return (this->name);
}

int	Form::getSignGrade(void) const
{
	return (this->sign_grade);
}

int	Form::getExecGrade(void) const
{
	return (this->exec_grade);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

std::ostream	&operator<<(std::ostream& os, const Form& inst)
{
	os << std::endl;
	os << "----------------------------- FORM INFO -----------------------------" << std::endl;
	os << "Form name :" << inst.getName() << std::endl;
	os << "Required grade to sign " << inst.getSignGrade() << std::endl;
	os << "Required grade to execute " << inst.getExecGrade() << std::endl;
	os << "The form is " << ((inst.isSigned()) ? "" : "not ") << "signed";
	return (os);
}
