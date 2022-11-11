/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:06:06 by sayar             #+#    #+#             */
/*   Updated: 2022/11/08 09:53:19 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{}

Intern::~Intern(void)
{}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern & Intern::operator=(const Intern& other)
{
    *this = other;
    return (*this);
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    std::string FormName[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    Form* forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };

    for (int i = 0; i < 3; i++) {
        if (name == FormName[i]) {
            std::cout << "Intern creates " << name << std::endl;
            return (forms[i]);
        }
    }
    std::cout << "Intern couldn't create " << name << " form" << std::endl;
    return (NULL);
}