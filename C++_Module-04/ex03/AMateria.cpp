/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:31 by sayar             #+#    #+#             */
/*   Updated: 2022/10/21 00:15:45 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "";
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& _amat)
{
	this->type = _amat.type;
	// std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	// std::cout << "AMateria " << this->type << " Constructed" << std::endl;
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria " << this->type << " destroyed" << std::endl;
}

// AMateria & AMateria::operator=(const AMateria& _amat)
// {
// 	this->type = _amat.type;
// 	// std::cout << "AMateria copy assignment operator" << std::endl;
// 	return (*this);
// }

std::string const & AMateria::getType() const
{
	return (this->type);
}


void    AMateria::use( ICharacter& target )
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}