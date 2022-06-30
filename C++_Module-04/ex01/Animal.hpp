/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:05:01 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 14:35:56 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
# define POLYMORPHISM_HPP

# include <iostream>

class	Animal
{
protected:
	std::string	type;
public:
	Animal(void);
	~Animal(void);
	Animal(Animal& _animal);
	Animal &operator=(const Animal& _animal);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;
	void		setType(std::string type);

};

#endif