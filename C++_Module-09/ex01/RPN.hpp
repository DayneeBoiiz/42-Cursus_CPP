/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:40:57 by sayar             #+#    #+#             */
/*   Updated: 2023/03/15 22:26:54 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>

class RPN {

private:

	typedef std::string::iterator	string_it;

	std::stack<double>	operands;

public:

	RPN(void);
	~RPN(void);
	RPN(const RPN &other);
	RPN &operator=(const RPN &other);

	int	evaluate_expression(std::string expression);
	int ft_strspn(std::string str, std::string charset);
	void	CheckValidaty(std::string str);

};

bool expression_ends_with_operand(std::string expression);

#endif