/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:49:08 by sayar             #+#    #+#             */
/*   Updated: 2023/03/15 21:14:47 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

	RPN	eval;

	(void)av;
	try {
		if (ac == 1)
			throw std::runtime_error("Error: need more arguments.");
		else if (ac > 2)
			throw std::runtime_error("Error: too many arguments.");
		else {
			std::cout << eval.evaluate_expression(av[1]) << std::endl;
		}
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}

}