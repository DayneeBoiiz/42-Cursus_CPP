/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:15:00 by sayar             #+#    #+#             */
/*   Updated: 2022/10/20 17:42:47 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice& _ice) : AMateria("ice")
{
	*this = _ice;
}

Ice & Ice::operator=(const Ice& _ice)
{
	this->type = _ice.type;
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return (new  Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}