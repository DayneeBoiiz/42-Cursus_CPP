/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:02:37 by sayar             #+#    #+#             */
/*   Updated: 2022/11/08 11:41:31 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat
{
private:
	std::string const	name;
	int					grade;
	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;
public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	Bureaucrat(std::string _name, int _grade);

	std::string getName(void) const;
	int			getGrade(void) const;
	void		checkGrade(void);
	void		incrementGrade();
	void		decrementGrade();
public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return ("Grade is too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return ("Grade is too low");
		}
	};
};

std::ostream & operator << (std::ostream &os, Bureaucrat const & instance);

#endif