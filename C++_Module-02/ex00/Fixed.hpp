/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:40:47 by sayar             #+#    #+#             */
/*   Updated: 2022/06/07 17:25:37 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


# include <iostream>

class	Fixed
{
private:
	int					integer;
	static const int	s_integer;
public:
	Fixed(void);
	Fixed(const Fixed& _Fixed);
	Fixed & operator = (const Fixed& _Fixed);
	~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif