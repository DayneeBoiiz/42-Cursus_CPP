/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:49:56 by sayar             #+#    #+#             */
/*   Updated: 2022/06/05 00:10:12 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    Clap;
    ScavTrap    Scav;

    Clap = ClapTrap("DayneeBoiiz");
    Clap.attack("Doliprane");
    Clap.takeDamage(10);
    Clap.attack("Doliprane");
    Clap.beRepaired(5);
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Clap.attack("Doliprane");
    Scav = ScavTrap("FixGree");
    Scav.attack("Doliprane");
    Scav.guardGate();
}