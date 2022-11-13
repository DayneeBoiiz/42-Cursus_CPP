/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:39:42 by sayar             #+#    #+#             */
/*   Updated: 2022/11/11 11:49:22 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T *array, size_t len, void (*f)(T&)) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

template<typename T>
void	_return(T &i) {
	std::cout << i << std::endl;
}


#endif