/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:59:06 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 09:04:02 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av) {

	if (ac != 2)
		return (1);

	int	 	array[] = {1, 2, 4, 5, 6, 7, 8, 9, 10};

	std::vector<int>	_vector(array, array + sizeof(array)/ sizeof(int));
	std::list<int>		_list(array, array + sizeof(array)/ sizeof(int));

	easyfind(_vector, std::atoi(av[1]));
	easyfind(_list, std::atoi(av[1]));

	return (0);
}