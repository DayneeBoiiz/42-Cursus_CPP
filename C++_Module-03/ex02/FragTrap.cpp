/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:25:41 by sayar             #+#    #+#             */
/*   Updated: 2022/09/27 17:48:15 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	health = 100;
	energy = 100;
	attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap& _frag) : ClapTrap::ClapTrap(_frag)
{
	this->health = _frag.health;
	this->energy = _frag.energy;
	this->attack_dmg = _frag.attack_dmg;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& _frag)
{
	this->health = _frag.health;
	this->energy = _frag.energy;
	this->attack_dmg = _frag.attack_dmg;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Can you give me a HighFive ✋"<< std::endl;
}