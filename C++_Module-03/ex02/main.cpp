/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:49:56 by sayar             #+#    #+#             */
/*   Updated: 2022/06/25 12:58:52 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap    Clap;
    // ScavTrap    Scav("FixGree");
	FragTrap	Frag("DayneeBoiiz");

    // Scav.attack("Doliprane");
	Frag.takeDamage(50);
	Frag.takeDamage(50);
	Frag.attack("FixGree");
	Frag.attack("FixGree");
	Frag.attack("FixGree");
	Frag.attack("FixGree");
	// std::cout << Frag.name << std::endl;
    // Scav.guardGate();
	// Frag.highFivesGuys();
}