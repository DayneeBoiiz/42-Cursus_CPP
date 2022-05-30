/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:36:05 by sayar             #+#    #+#             */
/*   Updated: 2022/05/24 15:01:24 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->get_type() << std::endl;
}