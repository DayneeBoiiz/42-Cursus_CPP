/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:29:08 by sayar             #+#    #+#             */
/*   Updated: 2022/06/04 23:47:43 by sayar            ###   ########.fr       */
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
    ~ClapTrap(void);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif