/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:24:43 by sayar             #+#    #+#             */
/*   Updated: 2022/10/01 11:19:20 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->name = "";   
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap name constructor called" << std::endl;
    this->_name = name;
    // std::cout << "---------------> health " << this->health << std::endl;
    // std::cout << "---------------> energy " << this->energy << std::endl;
    // std::cout << "---------------> attack " << this->attack_dmg << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& _diam) : ClapTrap(_diam), ScavTrap(_diam), FragTrap(_diam)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& _diam)
{
	std::cout << "Assignation operator for DiamondTrap called." << std::endl;
	FragTrap::operator=(_diam);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My clap name is " << ClapTrap::name << std::endl;
	std::cout << "My name is " << this->_name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
