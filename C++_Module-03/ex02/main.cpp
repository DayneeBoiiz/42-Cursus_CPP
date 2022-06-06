/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:49:56 by sayar             #+#    #+#             */
/*   Updated: 2022/06/06 16:40:04 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap    Clap;
    ScavTrap    Scav;
	FragTrap	Frag("DayneeBoiiz");

    // Clap = ClapTrap("DayneeBoiiz");
    // Clap.attack("Doliprane");
    // Clap.takeDamage(10);
    // Clap.attack("Doliprane");
    // Clap.beRepaired(5);
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    // Clap.attack("Doliprane");
    Scav = ScavTrap("FixGree");
    Scav.attack("Doliprane");
	Frag.attack("FixGree");
	Frag.takeDamage(50);
	// std::cout << Frag.name << std::endl;
    Scav.guardGate();
}