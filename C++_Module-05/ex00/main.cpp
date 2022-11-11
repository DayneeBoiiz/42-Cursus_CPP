/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:23:36 by sayar             #+#    #+#             */
/*   Updated: 2022/11/08 09:49:41 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
    try {
        Bureaucrat bureaucrat("ash", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        // bureaucrat.decrementGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	return (0);
}
