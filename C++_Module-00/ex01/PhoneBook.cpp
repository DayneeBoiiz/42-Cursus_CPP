/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:27:15 by sayar             #+#    #+#             */
/*   Updated: 2022/05/23 17:55:46 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

bool	is_number(std::string str)
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

void	print_contact(contact m_contact)
{
	if (m_contact.get_first_name() == "")
	{
		std::cout << "Contact doesn't exist" << std::endl;
		return ;
	}
	std::cout << "______________________________" << std::endl;
	std::cout << "First name : ";
	std::cout << m_contact.get_first_name() << std::endl;
	std::cout << "last name : ";
	std::cout << m_contact.get_last_name() << std::endl;
	std::cout << "nickname : ";
	std::cout << m_contact.get_nickname() << std::endl;
	std::cout << "Phone number : ";
	std::cout << m_contact.get_phone_number() << std::endl;
	std::cout << "Darkest secret : ";
	std::cout << m_contact.get_darkest_secret() << std::endl;
	std::cout << "______________________________"<< std::endl;
}

int	ft_atoi(std::string str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr);
}

void phonebook::add_contact(int i)
{
	std::cout<<std::endl;
	this->m_contact[i].change_first_name();
	if (this->m_contact->get_first_name() == "")
		return ;
	std::cout<<std::endl;
	this->m_contact[i].change_last_name();
	if (this->m_contact->get_last_name() == "")
		return ;
	std::cout<<std::endl;
	this->m_contact[i].change_nickname();
	if (this->m_contact->get_nickname() == "")
		return ;
	std::cout<<std::endl;
	this->m_contact[i].change_phone_number();
	if (this->m_contact->get_phone_number() == "")
		return ;
	std::cout<<std::endl;
	this->m_contact[i].change_darkest_secret();
}

std::string	modify_string(std::string str)
{
	int	i;
	std::string	line;

	i = str.length();
	if (i < 10)
		return (str);
	else
	{
		line = str.substr(0, 9);
		line.push_back('.');
	}
	return (line);
}

void	phonebook::search_contacts(int j)
{
	int 	i = 0;
	std::string line;
	int		index;

	std::cout<<"_____________________________________________"<<std::endl;
	std::cout<< "|" << std::right << std::setw(10) << "index" << "|" << std::right << std::setw(10)
			 << "first name" << "|" << std::right << std::setw(10)
			 << "last name" << "|" << std::right << std::setw(10) <<"nickname" << "|" <<std::endl;
	std::cout<< "|__________|__________|__________|__________|"<< std::endl;
	while (i < j)
	{
		std::cout<< "|" << std::right <<std::setw(10)
				 << i + 1 << "|" << std::right << std::setw(10)
				 << modify_string(this->m_contact[i].get_first_name()) << "|" << std::right << std::setw(10)
				 << modify_string(this->m_contact[i].get_last_name()) << "|" << std::right << std::setw(10)
				 << modify_string(this->m_contact[i].get_nickname()) << "|" <<std::endl;
		std::cout<< "|" << "__________" << "|" << "__________" << "|" << "__________" << "|" << "__________" << "|" << std::endl;
		i++;
	}
	if (j != 0)
	{
		while (1)
		{
			std::cout << "Enter an index of a contact : ";
			std::getline(std::cin, line);
			if (std::cin.eof())
				break ;
			std::cout << std::endl;
			if (is_number(line) == true)
			{
				index = ft_atoi(line);
				if (line  == "")
					std::cout << "Empty Input" << std::endl;
				else if (index >= 1 && index < 9)
				{
					print_contact(m_contact[index - 1]);
					break ;
				}
				else
					std::cout << "Invalid Index" << std::endl;
			}
			else
				std::cout<<"Invalid Input"<<std::endl;
		}
	}
}

int main()
{
	contact	contact;
	phonebook phone;
	std::string line;
	int i = 0;
	int size = 0;

	std::cout<<"Welcome to the PhoneBook"<<std::endl;
	std::cout<<"Available commands 'ADD' 'SEARCH' 'EXIT'"<<std::endl;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cout<<std::endl;
		std::cout << "-----> ";
		std::getline(std::cin, line);
		line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
		if (std::cin.eof())
			break ;
		if (line == "ADD")
		{
			phone.add_contact(i);
			if (size < 8)
				size++;
			i++;
		}
		else if (line == "SEARCH")
			phone.search_contacts(size);
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Invalid Command" << std::endl;
	}
	return (0);
}