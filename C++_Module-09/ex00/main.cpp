/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:56:19 by sayar             #+#    #+#             */
/*   Updated: 2023/03/15 14:35:34 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	BitcoinExchange	exch;

	(void)av;
	try {
		if (ac == 1)
			throw std::runtime_error("Error: could not open file.");
		else if (ac > 2)
			throw std::runtime_error("Error: too many arguments");
		else {
			exch.ParseDataBase("./database.csv");
			exch.ParseInput(av[1]);
			// exch.CalculateExchange();
		}
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}

}