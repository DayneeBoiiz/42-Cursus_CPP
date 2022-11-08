/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:35:50 by sayar             #+#    #+#             */
/*   Updated: 2022/10/18 15:22:15 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat ddestructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = other.type;
}

WrongCat & WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy operator called" << std::endl;
	this->type = other.type;
    return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!! 🐱🐱" << std::endl;
}
