/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:41:03 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 11:00:16 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "'DiamondTrap' Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	std::cout << "'DiamondTrap' Name constructor called" << std::endl;
	this->name = name;
	this->_name = name += "_clap_name";
	this->attack_dmg = FragTrap::attack_dmg;
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
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

void	DiamondTrap::attack(std::string name)
{
	FragTrap::attack(name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name << std::endl;
	std::cout << "My Clap name is " << this->_name << std::endl;
}