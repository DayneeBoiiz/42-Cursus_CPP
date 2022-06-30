/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:15:26 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 16:25:02 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain class constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain class destructor called" << std::endl;
}

Brain::Brain(Brain& _brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = _brain.ideas[i];
}

Brain &Brain::operator=(const Brain& _brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = _brain.ideas[i];
	return (*this);
}
