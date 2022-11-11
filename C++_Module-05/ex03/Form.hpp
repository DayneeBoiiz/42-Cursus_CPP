/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:44:47 by sayar             #+#    #+#             */
/*   Updated: 2022/11/08 11:44:47 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "stdexcept"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				_signed;
	const int			sign_grade;
	const int			exec_grade;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;
public:
	Form(void);
	~Form(void);
	Form(const std::string& name, int gradeToSign);
	Form(const std::string& name, int gradeToSign, int gradeToExec);
	Form(const Form& other);
	Form &operator= (const Form& form);

	std::string	getName(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
	bool		isSigned(void) const;

	void		checkGrade(void) const;
	void		beSigned(const Bureaucrat& bureaucrat);

	virtual void execute( const Bureaucrat& executor ) const = 0;

public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return ("Grade too High");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return ("Grade too Low");
		}
	};
	class NotSignedException : public std::exception
	{
		public:
        const char * what() const throw()
        {
			return ("Not Signed");
		}
	};
};

std::ostream	&operator<<(std::ostream& os, const Form& inst);

#endif