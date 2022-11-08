/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:24:04 by sayar             #+#    #+#             */
/*   Updated: 2022/10/18 15:20:35 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Class default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& _dog) : Animal(_dog)
{
	std::cout << "Dog Class copy constructor called" << std::endl;
	this->type = _dog.type;
}

Dog::~Dog(void)
{
	std::cout << "Dog Class destructor called" << std::endl;
}

Dog & Dog::operator = (Dog const & _dog)
{
	std::cout << "Dog Class operator= called" << std::endl;
	this->type = _dog.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof!! 🐕🐕" << std::endl;
}