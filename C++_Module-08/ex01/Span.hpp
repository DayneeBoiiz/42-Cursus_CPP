/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:44:01 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 21:03:48 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <list>
# include <algorithm>

class	Span {

private:
	std::list<int> _list;
	unsigned int	_n;
public:
	Span(void);
	Span(unsigned int n);
	Span(const Span& other);
	~Span(void);
	Span& operator=(const Span& other);

	void	addNumber(int value);
	void	addNumber(std::list<int>::const_iterator _begin, std::list<int>::const_iterator _end);
	unsigned int	longestSpan(void) const;
	unsigned int	shortestSpan(void) const;

	const std::list<int>*	getList(void) const;
};

std::ostream& operator<<(std::ostream& o, const Span& span);

#endif