/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:41:00 by sayar             #+#    #+#             */
/*   Updated: 2023/03/15 22:30:29 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN(void) {

}

RPN::~RPN(void) {

}

RPN::RPN(const RPN &other) {
	(void)other;
}

RPN &RPN::operator=(const RPN &other) {
	(void)other;
	return (*this);
}

int	RPN::ft_strspn(std::string str, std::string charset) {

	int i = 0;
    if (str.c_str() == nullptr || charset.c_str() == nullptr) {
        return i;
    }
    while (str[i] && strchr(charset.c_str(), str[i])) {
        i++;
    }
    return i;
}

bool expression_ends_with_operand(std::string expression) {

	    int i = expression.size() - 1;
    while (i >= 0 && std::isspace(expression[i])) {
        i--;
    }
    if (i < 0) {
        // Empty or all-whitespace expression, return an error
        return true;
    } else if (isdigit(expression[i])) {
        // Expression ends with a number, return an error
        return true;
    } else {
        // Expression ends with an operand, return without an error
        return false;
    }
}

void	RPN::CheckValidaty(std::string str) {

	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (std::isdigit((*it)) || (*it) == '+' || (*it) == '-' || (*it) == '*' || (*it) == '/') {
            throw std::runtime_error("Error");
        }
	}
}

int	RPN::evaluate_expression(std::string str) {

	std::istringstream	ss(str);
	std::string			token;

	// if (expression_ends_with_operand(str))
	// 	throw std::runtime_error("Error");

	// CheckValidaty(str);

	while (ss >> token) {

		// if (ft_strspn(token, "()"))
		// 	throw std::runtime_error("Error");

		if (token == "+" || token == "-" || token == "/" || token == "*") {

			if (operands.size() < 2) {
                // Not enough operands for the operator, return an error or throw an exception
                throw std::runtime_error("Error");
            }

			int operand2 = operands.top();
			operands.pop();
			int operand1 = operands.top();
			operands.pop();

			if (token == "+") {
				operands.push(operand1 + operand2);
			} else if (token == "-") {
				operands.push(operand1 - operand2);
			} else if (token == "*") {
				operands.push(operand1 * operand2);
			} else if (token == "/") {
				operands.push(operand1 / operand2);
			}
		}
		else {
			int operand = std::stoi(token);
			operands.push(operand);
		}
	}

	return (operands.top());
}
