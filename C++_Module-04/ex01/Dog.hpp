/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:08:29 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 17:20:06 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : virtual public Animal
{+
private:
	Brain* DogBrain;
public:
	Dog(void);
	~Dog(void);
	Dog(Dog& _dog);
	Dog & operator = (const Dog& _dog);
};

#endif