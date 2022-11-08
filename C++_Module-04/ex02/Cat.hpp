/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:15:33 by sayar             #+#    #+#             */
/*   Updated: 2022/10/18 15:21:42 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat(void);
	Cat(const Cat& _cat);
	virtual ~Cat(void);
	Cat& operator=(const Cat& _cat);
	void	makeSound(void) const;
};

#endif