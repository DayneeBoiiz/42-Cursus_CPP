/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:29:16 by sayar             #+#    #+#             */
/*   Updated: 2022/05/31 15:21:09 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::s_integer = 8;

Fixed::Fixed(void)
{
	this->integer = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& _Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(_Fixed);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
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

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->integer = roundf(integer * (1 << Fixed::s_integer));
}

Fixed::Fixed(const float integer)
{
	std::cout << "Float constructor called" << std::endl;
	this->integer = roundf(integer * (1 << Fixed::s_integer));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->integer / (float)(1 << Fixed::s_integer));
}

int		Fixed::toInt(void) const
{
	return (this->integer >> Fixed::s_integer);
}

std::ostream &operator << (std::ostream &COUT, Fixed const &_Fixed)
{
	COUT << _Fixed.toFloat();
	return (COUT);
}