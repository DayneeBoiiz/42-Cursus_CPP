/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:06:40 by sayar             #+#    #+#             */
/*   Updated: 2022/06/02 16:08:41 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iomanip>

class	Point
{
private:
	const int	x;
	const int	y;

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