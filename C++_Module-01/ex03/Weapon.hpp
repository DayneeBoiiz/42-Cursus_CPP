/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:38:06 by sayar             #+#    #+#             */
/*   Updated: 2022/05/24 14:47:29 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
private:
	std::string	type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	const std::string&	get_type();
	void	setType(std::string type);
};

#endif