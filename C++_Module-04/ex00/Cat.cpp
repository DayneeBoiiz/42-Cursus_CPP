/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:18:59 by sayar             #+#    #+#             */
/*   Updated: 2022/10/18 15:20:24 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat Class default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& _cat) : Animal(_cat)
{
	std::cout << "Cat Class copy constructor called" << std::endl;
	this->type = _cat.type;
}

Cat::~Cat(void)
{
	std::cout << "Cat Class destructor called" << std::endl;
}

Cat & Cat::operator = (const Cat &_cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = _cat.type;
    return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!! 🐱🐱" << std::endl;
}
