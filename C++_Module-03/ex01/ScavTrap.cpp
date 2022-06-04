/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 23:28:24 by sayar             #+#    #+#             */
/*   Updated: 2022/06/04 23:58:26 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    health = 100;
    energy = 50;
    attack_dmg = 20;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
