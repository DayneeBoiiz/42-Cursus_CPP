/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:40:16 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 18:40:54 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
    Bureaucrat bureaucrat("ash", 2); // error with 200
    ShrubberyCreationForm form1("Shrubbery");
    RobotomyRequestForm form2("Robotomy");
    PresidentialPardonForm form3("President");

    std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
    bureaucrat.signForm(form1);
    bureaucrat.executeForm(form1);
    std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
    bureaucrat.signForm(form2);
    bureaucrat.executeForm(form2);
    bureaucrat.executeForm(form2);
    bureaucrat.executeForm(form2);
    bureaucrat.executeForm(form2);
    std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
    bureaucrat.signForm(form3);
    bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}