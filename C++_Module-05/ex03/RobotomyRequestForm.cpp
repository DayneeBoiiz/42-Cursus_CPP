/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:48:37 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 18:48:22 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other), _target(other._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    (void)other;
    return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat& executer) const
{
    if (executer.getGrade() > getExecGrade())
        throw Form::GradeTooLowException();
    else {
        static int i;
        if (i % 2 == 0)
            std::cout << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
        i++;
    }
}
