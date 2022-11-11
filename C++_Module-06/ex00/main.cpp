/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:41:08 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 15:54:47 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Wrong Number of Arguments" << std::endl;
		return (1);
	}

	Convert	basic;

	try {
		basic.setLine(av[1]);
		basic.Converter();
		std::cout << basic;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}