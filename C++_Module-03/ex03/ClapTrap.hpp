/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:29:08 by sayar             #+#    #+#             */
/*   Updated: 2022/09/28 14:31:58 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap
{
protected:
    std::string name;
    int         health;
    int         energy;
    int         attack_dmg;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
	ClapTrap(ClapTrap& _clap);
    ~ClapTrap(void);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	ClapTrap & operator = (const ClapTrap& _clap);
    int const   &get_hp(void) const;
};

#endif