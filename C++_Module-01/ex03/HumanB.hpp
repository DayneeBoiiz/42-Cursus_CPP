/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:30:03 by sayar             #+#    #+#             */
/*   Updated: 2022/05/24 15:00:51 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
private:
	std::string	_name;
	Weapon		*_Weapon;
public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon &Weapon);
	void	attack();
};

#endif