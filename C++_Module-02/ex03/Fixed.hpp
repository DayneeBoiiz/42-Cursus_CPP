/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:52:56 by sayar             #+#    #+#             */
/*   Updated: 2022/05/31 21:55:30 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
private:
	int					integer;
	static const int	s_integer;
public:
	Fixed(void);
	Fixed(const Fixed& _Fixed);
	Fixed(const int integer);;
	Fixed(const float integer);
	Fixed & operator = (const Fixed& _Fixed);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
public:
	bool operator < (Fixed const &_fixed) const;
	bool operator > (Fixed const &_fixed) const;
	bool operator <= (Fixed const &_fixed) const;
	bool operator >= (Fixed const &_fixed) const;
	bool operator == (Fixed const &_fixed) const;
	bool operator != (Fixed const &_fixed) const;
	Fixed operator + (Fixed const &_fixed) const;
	Fixed operator - (Fixed const &_fixed) const;
	Fixed operator * (Fixed const &_fixed) const;
	Fixed operator / (Fixed const &_fixed) const;
	Fixed &operator ++ (void);
	Fixed operator ++ (int);
	Fixed &operator -- (void);
	Fixed operator -- (int);
public:
	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(Fixed const &first, Fixed const &second);
};

std::ostream &operator << (std::ostream &COUT, Fixed const &_Fixed);

#endif