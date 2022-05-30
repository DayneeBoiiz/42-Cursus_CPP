/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:19:55 by sayar             #+#    #+#             */
/*   Updated: 2022/05/30 23:26:22 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	int		i = 0;
	Zombie	*zombie_horde;
	if (N <= 0)
	{
		std::cout << "Error on allocating" << std::endl;
		return (NULL);
	}
	zombie_horde = new Zombie[N];
	if (!zombie_horde)
		return (NULL);
	while (i < N)
	{
		zombie_horde[i].get_name(name);
		i++;
	}
	return (zombie_horde);
}