/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:29:47 by sayar             #+#    #+#             */
/*   Updated: 2022/06/06 16:40:33 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "'Claptrap' Default consructor called" << std::endl;
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
    std::cout << "the ClapTrap took " << amount << " as damage" << std::endl;
    this->health -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "The ClapTrap repaired " << amount << " hit points back!" << std::endl;
    this->health += amount;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "'ClapTrap' Destructor Called" << std::endl;
}