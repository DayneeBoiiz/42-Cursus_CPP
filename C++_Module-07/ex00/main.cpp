/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:27:41 by sayar             #+#    #+#             */
/*   Updated: 2022/11/11 11:52:23 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {


	std::string str = "Hello";
	std::string str2 = "World";

	swap(str, str2);
	std::cout << "str : " << str << std::endl;
	std::cout << "str2 : " << str2 << std::endl;


	std::cout << min(str, str2) << std::endl;
	std::cout << max(str, str2) << std::endl;


	std::cout << "--------------------------- Int ----------------------------------" << std::endl;


	int		a = 42;
	int		b = 1337;

	swap (a, b);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << min(a, b) << std::endl;
	std::cout << max(a, b) << std::endl;
	min(a, b);
}