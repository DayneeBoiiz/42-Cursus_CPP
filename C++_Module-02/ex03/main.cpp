/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:20:19 by sayar             #+#    #+#             */
/*   Updated: 2022/06/04 22:10:04 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point	a(7, 7);
	Point	b(11, 1);
	Point	c(2, 2);
	Point	point(7, 6);

	if (bsp(a, b , c, point) == true)
		std::cout << "the point is inside of the triangle" << std::endl;
	else
		std::cout << "the point is outside the triangle" << std::endl;
	return (0);
}