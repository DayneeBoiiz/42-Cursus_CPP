/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:06:31 by sayar             #+#    #+#             */
/*   Updated: 2022/06/04 22:08:28 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::Point(Point& _point) : x(_point.x), y(_point.y)
{
}

Point & Point::operator= (const Point& _point)
{
	this->_fixed = _point._fixed;
	return (*this);
}

Point::~Point(void)
{
}

float	Point::area(Point const &a, Point const &b, Point const &c)
{
	return (0.5 * (a.x.getRawBits() * (b.y.getRawBits() - c.y.getRawBits()) + b.x.getRawBits() * (c.y.getRawBits() - a.y.getRawBits()) + c.x.getRawBits() * (a.y.getRawBits() - b.y.getRawBits())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3, area;
	float	pos_area;

	d1 = Point::area(point, a, b);
	if (d1 < 0)
		d1 *= -1;
	d2 = Point::area(point, b, c);
	if (d2 < 0)
		d2 *= -1;
	d3 = Point::area(point, c, a);
	if (d3 < 0)
		d3 *= -1;
	area = Point::area(a, b ,c);
	if (area < 0)
		area *= -1;

	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	pos_area = d1 + d2 + d3;
	if ((pos_area) == area)
		return (true);
	else
		return (false);
}