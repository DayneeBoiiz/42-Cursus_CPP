/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:37:28 by sayar             #+#    #+#             */
/*   Updated: 2022/06/25 14:58:16 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
	int			D_health;
	int			D_energy;
	int			D_attack_dmg;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& _diam);
	DiamondTrap & operator = (const DiamondTrap& _diam);
	~DiamondTrap(void);
	void whoAmI(void);
};

#endif