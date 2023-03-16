/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:23:22 by sayar             #+#    #+#             */
/*   Updated: 2023/03/16 18:10:47 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char **av) {

	PmergeMe sort;

	try {
		if (ac == 1)
			throw std::runtime_error("Error");
		else {

			sort.ParseAv(av, ac);
			std::vector<int> sorted = sort.merge_insert_sort();
			// for (size_t i = 0; i < sorted.size(); i++) {
        	// std::cout << sorted[i] << std::endl;
    		// }

		}
	}
	catch (std::runtime_error const &e) {
		std::cout << e.what() << std::endl;
	}

}