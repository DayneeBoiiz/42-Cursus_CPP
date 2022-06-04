/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:49:56 by sayar             #+#    #+#             */
/*   Updated: 2022/06/05 00:07:36 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Clap;

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
}