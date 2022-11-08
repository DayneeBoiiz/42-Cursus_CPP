/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:43 by sayar             #+#    #+#             */
/*   Updated: 2022/10/18 15:21:19 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Class default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal(void)
{
    std::cout << "Animal Class destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal& _animal)
{
    std::cout << "Animal copy assignement called" << std::endl;
    this->type = _animal.type;
    return (*this);
}

Animal::Animal(const Animal& _animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = _animal.type;
}

void Animal::makeSound(void) const
{
	std::cout << "Random Animal Sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
