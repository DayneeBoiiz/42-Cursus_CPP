/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:12:08 by sayar             #+#    #+#             */
/*   Updated: 2022/10/21 00:17:23 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	~Ice(void);
	Ice(const Ice& _ice);
	Ice& operator=(const Ice& _ice);

	virtual AMateria*	clone(void) const;
	virtual void		use(ICharacter& target);
};

#endif