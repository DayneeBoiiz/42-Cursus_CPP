/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:04:44 by sayar             #+#    #+#             */
/*   Updated: 2022/11/09 13:13:25 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int main() {
	Data	*data = new Data;

	data->name = "DayneeBoiiz";
	data->age = 24;

	std::cout << deserialize(serialize(data))->name << std::endl;
	std::cout << deserialize(serialize(data))->age << std::endl;

	delete data;

	return (0);
}