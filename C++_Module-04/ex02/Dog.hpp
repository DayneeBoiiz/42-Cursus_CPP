/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:22:37 by sayar             #+#    #+#             */
/*   Updated: 2022/10/24 22:30:50 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	brain;
public:
	Dog(void);
	Dog(const Dog& _dog);
	virtual ~Dog(void);
	Dog & operator=(const Dog& _dog);
	void	makeSound(void) const;
};

#endif