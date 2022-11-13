/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:20:59 by sayar             #+#    #+#             */
/*   Updated: 2022/11/11 11:52:51 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T& t1, T& t2) {
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<typename T>
T	min(T& t1, T& t2) {
	return (t1 < t2 ? t1 : t2);
}

template<typename T>
T	max(T& t1, T& t2) {
	return (t1 > t2 ? t1 : t2);
}

#endif