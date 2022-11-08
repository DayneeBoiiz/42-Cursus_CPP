/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:02:37 by sayar             #+#    #+#             */
/*   Updated: 2022/11/01 00:10:13 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal(void);
    Animal(const Animal& _animal);
	virtual ~Animal(void);
    Animal& operator=(const Animal& _animal);
    virtual void makeSound(void) const = 0;
	std::string     getType( void ) const;
};

#endif