/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:34:02 by sayar             #+#    #+#             */
/*   Updated: 2022/11/04 22:10:50 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++) {
		materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++) {
		if (materia[i]!= NULL)
			delete materia[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& source) { *this = source;}

MateriaSource& MateriaSource::operator=(const MateriaSource& source)
{
	for (int i = 0; i < 4; i++) {
		this->materia[i] = source.materia[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] == NULL) {
			this->materia[i] = materia;
            return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++) {
		if (materia[i] && materia[i]->getType() == type)
			return materia[i]->clone();
	}
	return (NULL);
}

AMateria*    MateriaSource::getMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++) {
		if (materia[i] && materia[i]->getType() == type)
			return (materia[i]);
	}
	return (NULL);
}