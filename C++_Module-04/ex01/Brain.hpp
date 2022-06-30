/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:12:42 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 16:18:35 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.cpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

class	Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(Brain& _brain);
	Brain &operator=(const Brain& _brain);
};

#endif