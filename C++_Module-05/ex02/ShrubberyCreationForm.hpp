/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:03:47 by sayar             #+#    #+#             */
/*   Updated: 2022/11/05 12:40:58 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const std::string& target);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm& other);

    void execute(const Bureaucrat& executer) const;
};

#endif