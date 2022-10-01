/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:28:49 by sayar             #+#    #+#             */
/*   Updated: 2022/05/31 13:24:37 by sayar            ###   ########.fr       */
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
	Fixed(const int integer);
	Fixed(const float integer);
	Fixed & operator = (const Fixed& _Fixed);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator << (std::ostream &COUT, Fixed const &_Fixed);

#endif