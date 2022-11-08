/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:34:03 by sayar             #+#    #+#             */
/*   Updated: 2022/10/21 00:11:19 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materia[4];
public:
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(const MateriaSource& source);
	MateriaSource& operator=(const MateriaSource& source);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	AMateria* getMateria(std::string const & type);


};

#endif