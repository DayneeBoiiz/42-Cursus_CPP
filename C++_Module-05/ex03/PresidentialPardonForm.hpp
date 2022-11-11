/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:44:44 by sayar             #+#    #+#             */
/*   Updated: 2022/11/04 22:27:36 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm & operator=(const PresidentialPardonForm& other);

    void execute( const Bureaucrat& executor ) const;
};

#endif