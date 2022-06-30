/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:06:07 by sayar             #+#    #+#             */
/*   Updated: 2022/06/30 15:22:21 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(WrongAnimal& _animal);
	WrongAnimal &operator=(const WrongAnimal& _animal);
	std::string getType(void) const;
	void	setType(std::string type);
	virtual void	makeSound(void) const;
};

#endif