/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:24:18 by sayar             #+#    #+#             */
/*   Updated: 2022/06/06 16:43:23 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "'FragTrap' Default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "'FragTrap' Default destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "'FragTrap' Name constructor called" << std::endl;
	this->name = name;
	health = 100;
    energy = 100;
    attack_dmg = 30;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << ""
}