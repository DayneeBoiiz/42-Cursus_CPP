/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:02:35 by sayar             #+#    #+#             */
/*   Updated: 2022/05/23 19:06:13 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
private:
	std::string	name;


public:
	Zombie(std::string name);
	void	announce(void)
	{
		std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	}
	~Zombie(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif