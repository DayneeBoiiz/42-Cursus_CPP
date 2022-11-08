/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:50:11 by sayar             #+#    #+#             */
/*   Updated: 2022/10/24 22:38:25 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

# define ANIMAL_COUNT 8

int	main( void )
{
	Animal	*animals[ANIMAL_COUNT];

	for (int i = 0; i < ANIMAL_COUNT; i++)
	{
		if (i < ANIMAL_COUNT / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	for (int i = 0; i < ANIMAL_COUNT; i++)
		delete animals[i];
}

