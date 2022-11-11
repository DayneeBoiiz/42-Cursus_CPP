/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:46:01 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 18:48:06 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5), _target(target) 
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), _target(other._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    (void)other;
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executer) const
{
    if (executer.getGrade() > getExecGrade())
        throw Form::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned" << std::endl;
}