/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:24:45 by sayar             #+#    #+#             */
/*   Updated: 2022/10/01 11:10:35 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class   DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap& _diam);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& _diam);
    DiamondTrap& operator=(const DiamondTrap& _diam);
    void	attack(std::string const &target);
	void	whoAmI(void);
};

#endif