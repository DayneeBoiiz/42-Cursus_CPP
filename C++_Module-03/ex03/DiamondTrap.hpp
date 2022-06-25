/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:14:43 by sayar             #+#    #+#             */
/*   Updated: 2022/06/25 13:07:11 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;
	int			health;
	int			energy;
	id_t		attack_dmg;
public:
	DiamondTrap(std::string name);
	DiamondTrap(void);
};

#endif