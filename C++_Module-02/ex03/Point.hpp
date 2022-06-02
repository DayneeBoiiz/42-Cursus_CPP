/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:06:40 by sayar             #+#    #+#             */
/*   Updated: 2022/06/02 23:29:30 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
	Fixed	_fixed;
	Point(void);
	Point(const float _x, const float _y);
	Point(Point& _point);
	Point & operator= (const Point& _Fixed);
	~Point(void);
	static float area(Point const &a, Point const &b, Point const &c);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif