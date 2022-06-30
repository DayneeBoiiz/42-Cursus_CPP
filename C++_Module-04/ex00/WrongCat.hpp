/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:59:15 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 15:20:49 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : virtual public WrongAnimal
{
public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(WrongCat& _cat);
	WrongCat &operator=(const WrongCat& _cat);
};

#endif