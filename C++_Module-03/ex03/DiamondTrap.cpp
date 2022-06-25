/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:19:37 by sayar             #+#    #+#             */
/*   Updated: 2022/06/25 13:13:24 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "'DiamondTrap' name constctor called" << std::endl;
	this->name = name;
}

DiamondTrap::DiamondTrap(void)
{
	std::cout << "HelloWorld" << std::endl;
	health = FragTrap::health;
	energy = ScavTrap::energy;
	attack_dmg = FragTrap::attack_dmg;
	std::cout << health << std::endl;
	std::cout << energy << std::endl;
	std::cout << attack_dmg << std::endl;
}