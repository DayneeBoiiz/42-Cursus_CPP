/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:05:23 by sayar             #+#    #+#             */
/*   Updated: 2022/05/25 14:28:23 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

size_t	ft_strlen(std::string str)
{
	int		i = 0;
	while (str[i])
		i++;
	return (i);
}

std::string	ft_read(char *string)
{
	std::ifstream	file;
	std::string		str_copy;
	std::string		return_str;

	file.open(string, std::ios::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			std::getline(file, str_copy);
			return_str += str_copy;
		}
		return (return_str);
	}
	else
		std::cout << "Error reading file" << std::endl;
	return ("");
}

std::string	ft_change(std::string return_str, char *s1, char *s2)
{
	int	i = 0;

	i = return_str.find(s1);
	while (i < return_str.length())
	{
		return_str.erase(i, strlen(s1));
		return_str.insert(i, s2);
		i = return_str.find(s1);
	}
	return (return_str);
}

std::string	replace_string(std::string replace, char *str)
{
	replace = str;
	replace.insert(ft_strlen(replace), ".replace");
	return (replace);
}

void	write_to_file(std::string return_str, char *string)
{
	std::string		replace;
	std::ofstream	replace_file;

	replace = replace_string(replace, string);
	replace_file.open(replace, std::ios::app);
	replace_file << return_str;
	replace_file.close();
	return ;
}

int main(int ac, char **av)
{
	std::string	return_str;
	int 		i = 0;
	if (ac == 4)
	{
		if (ft_read(av[1]) != "")
		{
			return_str = ft_read(av[1]);
			return_str = ft_change(return_str, av[2], av[3]);
			//std::cout << return_str << std::endl;
			write_to_file(return_str, av[1]);
		}
	}
	else
		std::cout << "Wrong Arguments" << std::endl;
	return (0);
}