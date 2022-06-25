/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:41:03 by sayar             #+#    #+#             */
/*   Updated: 2022/06/25 14:58:51 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "'DiamondTrap' Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->_name = name += "_clap_name";
	D_health = FragTrap::health;
	D_energy = ScavTrap::energy;
	D_attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap& _diam)
{
	D_health = _diam.D_health;
	D_energy = _diam.D_energy;
	D_attack_dmg = _diam.D_attack_dmg;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& _diam)
{
	D_health = _diam.D_health;
	D_energy = _diam.D_energy;
	D_attack_dmg = _diam.D_attack_dmg;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "'DiamondTrap' Destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << 
}