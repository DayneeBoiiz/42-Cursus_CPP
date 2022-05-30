/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:53:21 by sayar             #+#    #+#             */
/*   Updated: 2022/05/24 16:21:59 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
private:
	std::string	_name;
	Weapon		&_Weapon;
public:
	HumanA(void);
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
};

#endif