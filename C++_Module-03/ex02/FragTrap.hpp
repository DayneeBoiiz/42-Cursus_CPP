/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:08:18 by sayar             #+#    #+#             */
/*   Updated: 2022/06/06 16:42:01 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	void highFivesGuys(void);
};

#endif