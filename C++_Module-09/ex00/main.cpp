/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:56:19 by sayar             #+#    #+#             */
/*   Updated: 2023/03/09 15:58:20 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	try {
		if (ac == 1)
			throw std::runtime_error("Error: could not open file.");
		else if (ac > 2)
			throw std::runtime_error("Error: too many arguments");
		else {
			
		}
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}

}