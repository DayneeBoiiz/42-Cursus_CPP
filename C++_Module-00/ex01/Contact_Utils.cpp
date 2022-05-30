/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:27:52 by sayar             #+#    #+#             */
/*   Updated: 2022/05/23 17:49:38 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	contact::is_number(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}
bool	contact::is_alpha(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		if (isalpha(str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

void	contact::change_first_name()
{
	std::string line;
	while (line.empty())
	{
		std::cout<<"Enter first name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if(line.empty())
			std::cout << "empty field"<<std::endl;
		else if(is_alpha(line) == false)
		{
			std::cout<<"this field requires alphabetics only"<<std::endl;
			line.erase();
		}
	}
	this->m_first_name = line;
}

void	contact::change_last_name()
{
	std::string line;
	while (line.empty())
	{
		std::cout<<"Enter last name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if(line.empty())
			std::cout << "empty field"<<std::endl;
		else if(is_alpha(line) == false)
		{
			std::cout<<"this field requires alphabetics only"<<std::endl;
			line.erase();
		}
	}
	this->m_last_name = line;
}

void	contact::change_nickname()
{
	std::string line;
	while (line.empty())
	{
		std::cout<<"Enter nickname : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if(line.empty())
			std::cout << "empty field"<<std::endl;
		else if(is_alpha(line) == false)
		{
			std::cout<<"this field requires alphabetics only"<<std::endl;
			line.erase();
		}
	}
	this->m_nickname = line;
}

void	contact::change_phone_number()
{
	std::string line;
	while (line.empty())
	{
		std::cout<<"Enter phone number : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if(line.empty())
			std::cout << "empty field"<<std::endl;
		else if(is_number(line) == false)
		{
			std::cout<<"this field requires digits only"<<std::endl;
			line.erase();
		}
	}
	this->m_phone_number = line;
}

void	contact::change_darkest_secret()
{
	std::string line;
	while (line.empty())
	{
		std::cout<<"Enter darkset secret : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if(line.empty())
			std::cout << "empty field"<<std::endl;
		else if(is_alpha(line) == false)
		{
			std::cout<<"this field requires alphabetics only"<<std::endl;
			line.erase();
		}
	}
	this->m_darkest_secret = line;
}

std::string	contact::get_first_name()
{
	return (this->m_first_name);
}

std::string	contact::get_last_name()
{
	return (this->m_last_name);
}

std::string	contact::get_nickname()
{
	return (this->m_nickname);
}

std::string	contact::get_phone_number()
{
	return (this->m_phone_number);
}

std::string	contact::get_darkest_secret()
{
	return (this->m_darkest_secret);
}