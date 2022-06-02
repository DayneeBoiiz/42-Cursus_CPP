/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:20:19 by sayar             #+#    #+#             */
/*   Updated: 2022/06/02 23:45:53 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point	a(2, 4);
	Point	b(3, -6);
	Point	c(7, 8);
	Point	point(5, 7);

	if (bsp(a, b , c, point) == true)
		std::cout << "the point is inside of the triangle" << std::endl;
	else
		std::cout << "the point is outside the triangle" << std::endl;
	return (0);
}