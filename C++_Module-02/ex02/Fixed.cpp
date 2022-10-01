/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:52:48 by sayar             #+#    #+#             */
/*   Updated: 2022/05/31 22:11:09 by sayar            ###   ########.fr       */
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

bool Fixed::operator < (Fixed const &_fixed) const
{
	if (this->integer < _fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator > (Fixed const &_fixed) const
{
	if (this->integer > _fixed.integer)
		return (true);
	return (false);

}

bool Fixed::operator <= (Fixed const &_fixed) const
{
	if (this->integer <= _fixed.integer)
		return (true);
	return (false);
}

bool Fixed::operator >= (Fixed const &_fixed) const
{
	if (this->integer >= _fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator == (Fixed const &_fixed) const
{
	if (this->integer == _fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator != (Fixed const &_fixed) const
{
	if (this->integer != _fixed.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator + (Fixed const &_fixed) const
{
	return Fixed(this->integer + _fixed.getRawBits());
}

Fixed Fixed::operator - (Fixed const &_fixed) const
{
	return Fixed(this->integer - _fixed.getRawBits());
}

Fixed Fixed::operator * (Fixed const &_fixed) const
{
	return Fixed(this->toFloat() * _fixed.toFloat());
}

Fixed Fixed::operator / (Fixed const &_fixed) const
{
	return Fixed(this->integer / _fixed.getRawBits());
}

Fixed &Fixed::operator ++ (void)
{
	this->integer++;
	return (*this);
}

Fixed &Fixed::operator -- (void)
{
	this->integer--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed old = *this;
	this->integer++;
	return (old);
}

Fixed Fixed::operator -- (int)
{
	Fixed old = *this;
	this->integer--;
	return (old);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed const &Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed const &Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first > second)
		return (first);
	return (second);
}

std::ostream &operator << (std::ostream &COUT, Fixed const &_Fixed)
{
	COUT << _Fixed.toFloat();
	return (COUT);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->integer / (float)(1 << Fixed::s_integer));
}

int		Fixed::toInt(void) const
{
	return (this->integer >> Fixed::s_integer);
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

const int Fixed::s_integer = 8;