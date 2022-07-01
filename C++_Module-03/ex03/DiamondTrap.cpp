/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:41:03 by sayar             #+#    #+#             */
/*   Updated: 2022/07/01 14:00:17 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "'DiamondTrap' Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "'DiamondTrap' Name constructor called" << std::endl;
	this->_name = name;
	std::cout << this->health << std::endl;
	std::cout << this->energy << std::endl;
	std::cout << this->attack_dmg << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "'DiamondTrap' Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& _diam)
{
	this->name = _diam.name;
	this->health = _diam.health;
	this->attack_dmg = _diam.attack_dmg;
	this->energy = _diam.energy;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My clap name is " << this->name << std::endl;
	std::cout << "My name is " << this->_name << std::endl;
}