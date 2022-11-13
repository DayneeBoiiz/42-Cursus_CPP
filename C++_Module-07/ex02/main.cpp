/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:34:32 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 08:46:16 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	Array<int>	intArray(10);

	for (unsigned int i = 0; i < intArray.size(); i++) {
		intArray[i] = i * 2;
	}

	std::cout << intArray << std::endl;

	Array<int>	intArray1(5);

	intArray1 = intArray;
	std::cout << intArray1 << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;

	try {
		std::cout << "valid index " << intArray[5] << std::endl;
		std::cout << "Invalid index " << intArray[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}