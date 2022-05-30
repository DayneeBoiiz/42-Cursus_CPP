/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:06:46 by sayar             #+#    #+#             */
/*   Updated: 2022/05/23 18:59:01 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*n_zombie;

	n_zombie = newZombie("DayneeBoiiz");
	n_zombie->announce();

	randomChump("FixGree");
	randomChump("Durkside");
	delete n_zombie;
	return (0);
}