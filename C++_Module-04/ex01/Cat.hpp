/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:10:55 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 16:26:37 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : virtual public Animal
{
private:
	Brain*	CatBrain;
public:
	Cat(void);
	~Cat(void);
	Cat(Cat& _cat);
	Cat &operator=(const Cat& _cat);
};

#endif