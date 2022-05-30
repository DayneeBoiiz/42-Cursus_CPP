/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:08:21 by sayar             #+#    #+#             */
/*   Updated: 2022/05/24 14:19:05 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
private:
	std::string	name;

public:
	Zombie(void);
	~Zombie(void);
	void announce( void )
	{
		std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void	get_name(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif