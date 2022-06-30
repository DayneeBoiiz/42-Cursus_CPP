/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:08:50 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 15:22:13 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "Animal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& _animal)
{
	this->type = _animal.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& _animal)
{
	this->type = _animal.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void) const
{
	if (this->type == "WrongCat")
		std::cout << "(WrongSound) Bark Bark!!" << std::endl;
	else
		std::cout << "u heard the WrongAnimal sound" << std::endl;
}