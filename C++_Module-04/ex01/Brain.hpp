/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:21:17 by sayar             #+#    #+#             */
/*   Updated: 2022/10/08 23:23:28 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
};

#endif