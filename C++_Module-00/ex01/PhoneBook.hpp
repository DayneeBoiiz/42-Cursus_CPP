/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:25:32 by sayar             #+#    #+#             */
/*   Updated: 2022/05/21 17:47:35 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Contact.hpp"

class	phonebook
{
private:
	contact	m_contact[8];
public:
	void	add_contact(int i);
	void	search_contacts(int j);
};