/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:41:25 by sayar             #+#    #+#             */
/*   Updated: 2022/05/28 22:23:43 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->integer = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& _Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->integer = _Fixed.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

void Fixed::setRawBits( int const raw )
{
	this->integer = raw;
}

Fixed & Fixed::operator = (const Fixed& _Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->integer = _Fixed.getRawBits();
	return (*this);
}