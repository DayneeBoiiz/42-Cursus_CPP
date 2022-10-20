/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:29:47 by sayar             #+#    #+#             */
/*   Updated: 2022/10/18 14:44:07 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default consructor called" << std::endl;
    this->name = "";
    this->health = 10;
    this->energy = 10;
    this->attack_dmg = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name constructor called" << std::endl;
    this->name = name;
    this->attack_dmg = 0;
    this->health = 10;
    this->energy = 10;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& _clap)
{
	this->name = _clap.name;
	this->attack_dmg = _clap.attack_dmg;
	this->health = _clap.health;
	this->energy = _clap.energy;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap &_clap)
{
	this->name = _clap.name;
	this->attack_dmg = _clap.attack_dmg;
	this->health = _clap.health;
	this->energy = _clap.energy;
}

void    ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->attack_dmg << " points of damage!" << std::endl;
    this->energy--;
}

void    ClapTrap::takeDamage(unsigned int amount)
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
    std::cout << "the ClapTrap took " << amount << " as damage" << std::endl;
    this->health -= amount;
	this->energy--;
}

void    ClapTrap::beRepaired(unsigned int amount)
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
    std::cout << "The ClapTrap repaired " << amount << " hit points back!" << std::endl;
    this->health += amount;
	this->energy--;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor Called" << std::endl;
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->health);
}