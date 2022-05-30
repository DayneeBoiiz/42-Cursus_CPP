/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:25:27 by sayar             #+#    #+#             */
/*   Updated: 2022/05/30 23:25:26 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*	n_horde;
	int		i = 0;

	n_horde = zombieHorde(-2, "Saad");
	if (n_horde = NULL)
	{
		exit (1);
	}
	while (i < 5)
	{
		n_horde[i].announce();
		i++;
	}
	delete[] n_horde;
	return (0);
}