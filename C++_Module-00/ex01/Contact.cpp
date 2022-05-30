/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:25:01 by sayar             #+#    #+#             */
/*   Updated: 2022/05/21 17:47:45 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

contact::contact()
{
	this->m_first_name = "";
	this->m_last_name = "";
	this->m_nickname = "";
	this->m_phone_number = "";
	this->m_darkest_secret = "";

}
