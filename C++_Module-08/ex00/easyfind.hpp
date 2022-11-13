/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:49:12 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 09:05:30 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

template<typename T>
void	easyfind(T& container, int value) {
	if (std::find(container.begin(), container.end(), value) != container.end())
		std::cout << "Found" << std::endl;
	else
		std::cerr << "Not found" << std::endl;
}

#endif