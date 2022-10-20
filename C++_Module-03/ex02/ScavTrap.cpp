/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:06:00 by sayar             #+#    #+#             */
/*   Updated: 2022/09/27 17:36:53 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& _scav) : ClapTrap::ClapTrap(_scav)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
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
	std::cout << "ScavTrap name constructor called" << std::endl;
	health = 100;
	energy = 50;
	attack_dmg = 20;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy == 0)
    {
        std::cout << "No more Energy" << std::endl;
        return ;
    }
    if (this->health == 0)
    {
        std::cout << "No more hit points" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << this->attack_dmg << " points of damage!" << std::endl;
    this->energy--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}