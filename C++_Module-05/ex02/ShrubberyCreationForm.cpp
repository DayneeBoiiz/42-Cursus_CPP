/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:09:11 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 18:49:02 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other), _target(other._target)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    (void)other;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executer) const
{
    if (isSigned() == false)
        throw Form::NotSignedException();
    else if (executer.getGrade() > getExecGrade())
        throw Form::GradeTooLowException();

    std::ofstream file(getName() + "_shrubbery");
    file << "                       ___" << std::endl;
    file << "                 _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "              ,-'          __,,-- \\" << std::endl;
    file << "            ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "           /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "         ,'       _Hb ___dF\"-._,-'" << std::endl;
    file << "       ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "      (     ,-'                  `." << std::endl;
    file << "       `._,'     _   _             ;" << std::endl;
    file << "        ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "        \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "         `--'   \"Hb  HH  dF\"" << std::endl;
    file << "                 \"Hb HH dF" << std::endl;
    file << "                  \"HbHHdF" << std::endl;
    file << "                   |HHHF" << std::endl;
    file << "                   |HHH|" << std::endl;
    file << "                   |HHH|" << std::endl;
    file << "                   |HHH|" << std::endl;
    file << "                   |HHH|" << std::endl;
    file << "                   dHHHb" << std::endl;
    file << "                 .dFd|bHb.               o" << std::endl;
    file << "       o       .dHFdH|HbTHb.          o /" << std::endl;
    file << " \\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << " ##########################################" << std::endl;
}
