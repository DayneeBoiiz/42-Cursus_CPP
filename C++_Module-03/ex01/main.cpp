/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:49:56 by sayar             #+#    #+#             */
/*   Updated: 2022/06/25 14:22:54 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	scav("DayneeBoiiz");

	scav.attack("doliprane");
	scav.takeDamage(10);
	scav.attack("doliprane");
	scav.attack("doliprane");
	scav.guardGate();
}