/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:47:47 by sayar             #+#    #+#             */
/*   Updated: 2022/11/05 12:41:18 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm();    
    RobotomyRequestForm(const std::string& target);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm & operator=(const RobotomyRequestForm& other);

    void execute(const Bureaucrat& executer) const;
};

#endif