/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:30:08 by sayar             #+#    #+#             */
/*   Updated: 2022/05/23 13:49:48 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		std::cout<<(char)toupper(str[i]);
		i++;
	}
}

void	ft_format(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		ft_toupper(av[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		ft_format(av);
		std::cout<<std::endl;
	}
	return (0);
}