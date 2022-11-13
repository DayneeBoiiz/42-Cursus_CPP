/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:50:05 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 21:10:07 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {
	this->_n = 0;
}

Span::Span(unsigned int n) {
	this->_n = n;
}

Span::Span(const Span& other) {
	*this = other;
}

Span::~Span(void)
{}

Span& Span::operator=(const Span& other) {
	this->_n = other._n;
	this->_list = other._list;
	return (*this);
}

void	Span::addNumber(int value) {
	if (_list.size() > _n) {
		throw std::out_of_range("List is Full");
	}
	_list.push_back(value);
}

void	Span::addNumber(std::list<int>::const_iterator _begin, std::list<int>::const_iterator _end) {
	if (_list.size() > _n) {
		throw std::out_of_range("List is Full");
	}
	_list.insert(_list.end(), _begin, _end);
}

unsigned int Span::longestSpan(void) const {
	if (_list.size() < 2)
		throw std::out_of_range("List is Empty");
	return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}

unsigned int Span::shortestSpan(void) const {
	if (_list.size() < 2)
		throw std::out_of_range("List is Empty");
	unsigned int min = Span::longestSpan();
	for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it) {
		for (std::list<int>::const_iterator it2 = _list.begin(); it2 != _list.end(); ++it2) {
			if (it == it2) {
				continue ;
			}
			if (std::abs(*it2) - *it < static_cast<int>(min)) {
				min = std::abs(*it2 - *it);
			}
		}
	}
	return (min);
}


