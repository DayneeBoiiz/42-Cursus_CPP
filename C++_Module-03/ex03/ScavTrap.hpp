/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:45:55 by sayar             #+#    #+#             */
/*   Updated: 2022/10/01 11:17:22 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
protected:
	int	energy;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& _scav);
	~ScavTrap(void);
	ScavTrap & operator = (const ScavTrap& _scav);
	void guardGate(void);
	void attack(const std::string& target);
};

#endif