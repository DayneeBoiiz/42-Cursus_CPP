/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:57:56 by sayar             #+#    #+#             */
/*   Updated: 2022/10/21 00:16:53 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	~Cure(void);
	Cure(const Cure& _cure);
	Cure & operator= (const Cure& _cure);

	virtual AMateria*	clone(void) const;
	virtual void		use(ICharacter& _char);
};

#endif