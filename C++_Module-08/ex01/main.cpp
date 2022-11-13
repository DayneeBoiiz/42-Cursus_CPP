/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:12:05 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 21:21:31 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	try {
		std::list<int>	_List(10000);
		std::srand(time(0));
		std::generate(_List.begin(), _List.end(), std::rand);

		Span _span(_List.size());
		_span.addNumber(_List.begin(), _List.end());

		std::cout << _span.shortestSpan() << std::endl;
		std::cout << _span.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}