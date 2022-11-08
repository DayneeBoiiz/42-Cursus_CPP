/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:24:04 by sayar             #+#    #+#             */
/*   Updated: 2022/11/05 11:01:38 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Class default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = NULL;
}

Dog::Dog(const Dog& _dog) : Animal(_dog)
{
	std::cout << "Dog Class copy constructor called" << std::endl;
	this->type = _dog.type;
	this->brain = new Brain(*_dog.brain);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog Class destructor called" << std::endl;
}

Dog & Dog::operator = (Dog const & _dog)
{
	std::cout << "Dog Class operator= called" << std::endl;
	this->type = _dog.type;
	this->brain = new Brain(*_dog.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof!! 🐕🐕" << std::endl;
}