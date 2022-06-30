/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:08:29 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 14:33:25 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : virtual public Animal
{
public:
	Dog(void);
	~Dog(void);
	Dog(Dog& _dog);
	Dog & operator = (const Dog& _dog);
};

#endif