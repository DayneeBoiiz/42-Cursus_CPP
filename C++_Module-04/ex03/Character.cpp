/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:58:13 by sayar             #+#    #+#             */
/*   Updated: 2022/10/27 18:46:51 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->name = "";
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	// std::cout << "Character class constructor called" << std::endl;
}

Character::Character(std::string const &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	// std::cout << "Character " << this->name << " Created" << std::endl;
}

Character::Character(const Character& other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = other.inventory[i];
	}
	// std::cout << "Character " << this->name << " Created" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++) {
		delete this->inventory[i];
	}
	// std::cout << "Character " << this->name << " Destroyed" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = other.inventory[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			// std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl;
            return ;
		}
	}
	std::cout << "Character " << this->name << " can't equip " << m->getType() << std::endl;
}

void    Character::unequip(int idx)
{
	if (this->inventory[idx]) {
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
		std::cout << "Character " << this->name << " Unequipped" << std::endl;
	}
	else
		std::cout << "Character " << this->name << " Can't Unequip" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
		// std::cout << "Character " << this->name << " uses " << this->inventory[idx]->getType() << std::endl;
	}
	// else
		// std::cout << "Character " << this->name << " Can't use" << std::endl;
}