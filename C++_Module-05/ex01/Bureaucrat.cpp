/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:03:49 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 16:26:08 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name(""), grade(lowestGrade)
{
	std::cout << "Bureacrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	std::cout << "bureaucrat copy constructor called" << std::endl;
}

Bureaucrat	& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.grade;
	std::cout << "name is a const, it can't be copied" << std::endl;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	checkGrade();
	// std::cout << "Bureaucrat standard constructor called" << std::endl;
}

void	Bureaucrat::checkGrade(void)
{
	if (this->grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(int value)
{
	std::cout << "Bureaucrat grade is incremented with " << value << std::endl;
	this->grade -= value;
	checkGrade();
}

void	Bureaucrat::decrementGrade(int value)
{
	std::cout << "Bureaucrat grade is decremented with " << value << std::endl;
	this->grade += value;
	checkGrade();
}

std::ostream & operator<<(std::ostream &os, Bureaucrat const & instance)
{
	os << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return (os);
}

void    Bureaucrat::signForm( Form& form )
{
    try {
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
