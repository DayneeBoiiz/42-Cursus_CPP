/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:22:43 by sayar             #+#    #+#             */
/*   Updated: 2022/11/11 12:03:20 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>
# include <list>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

public:
	MutantStack() {};
	MutantStack(const Container & cntr) : std::stack<T, Container>(cntr) {};
	~MutantStack() {};
	MutantStack(const MutantStack& other) {
		*this = other;
	}
	MutantStack& operator=(const MutantStack& other) {
		std::stack<T, Container>::operator=(other);
		return (*this);
	}

	typedef typename	Container::iterator	iterator;

	iterator	begin() {
		return (this->c.begin());
	}
	iterator	end() {
		return (this->c.end());
	}
};

#endif