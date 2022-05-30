/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:15:25 by sayar             #+#    #+#             */
/*   Updated: 2022/05/24 14:18:23 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Destroyed" << std::endl;
}

void	Zombie::get_name(std::string name)
{
	this->name = name;
	return ;
}