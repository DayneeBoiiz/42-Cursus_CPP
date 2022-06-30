/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:04:59 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 15:14:31 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Constructor called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal& _animal)
{
	this->type = _animal.type;
}

Animal & Animal::operator=(const Animal& _animal)
{
	this->type = _animal.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	if (this->type == "Dog")
		std::cout << "Bark bark!!" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Meow Meow!!" << std::endl;
	else
		std::cout << "just heared an Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}