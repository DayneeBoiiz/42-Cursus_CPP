/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:06:00 by sayar             #+#    #+#             */
/*   Updated: 2022/07/01 13:58:27 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "'ScavTrap' Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "'ScavTrap' Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& _scav)
{
	this->health = _scav.health;
	this->name = _scav.name;
	this->attack_dmg = _scav.attack_dmg;
	this->energy = _scav.energy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& _scav)
{
	this->health = _scav.health;
	this->name = _scav.name;
	this->attack_dmg = _scav.attack_dmg;
	this->energy = _scav.energy;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	health = 100;
	energy = 50;
	attack_dmg = 20;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string name)
{
	std::cout << "ScavTrap " << this->name << " attack " << name << " causing " << this->attack_dmg << std::endl;
}