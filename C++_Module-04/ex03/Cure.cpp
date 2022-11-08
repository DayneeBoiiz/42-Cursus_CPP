/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:59:33 by sayar             #+#    #+#             */
/*   Updated: 2022/10/19 12:11:26 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure& _cure) : AMateria("cure")
{
	*this = _cure;
}

Cure & Cure::operator=(const Cure& _cure)
{
	this->type = _cure.type;
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& _char)
{
	std::cout << "* heals " << _char.getName() << "'s wounds *" << std::endl;
}