/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:58:27 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 08:39:53 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class Array {

private:
	T*				array;
	unsigned int 	_len;

public:
	Array(void) : array(new T()), _len(0) {};
	Array(unsigned int n) : array(new T[n]), _len(n) {};
	Array(const Array& other) {
		delete this->array;
		array = new T[other.size()];
		_len = other._len;
		for (unsigned int i = 0; i < _len; i++) {
			array[i] = other.array[i];
		}
	};
	Array& operator=(const Array& other) {
		delete[]	array;
		array = new T[other.size()];
		_len = other._len;
		for (unsigned int i = 0; i < _len; i++) {
			array[i] = other.array[i];
		}
		return (*this);
	}
	T& operator[](unsigned int i) const {
		if (i >= _len)
			throw OutOfBoundsExcception();
		return (array[i]);
	}

	~Array(void) {
		delete[] array;
	}

	unsigned int size(void) const {
		return (this->_len);
	}

	class OutOfBoundsExcception : public std::exception {
		public:
			const char * what() const throw() {
				return ("Index is out of bounds");
			}
	};
};

template<typename T>
std::ostream& operator<<(std::ostream& o, const Array<T>& array) {
	for (unsigned int i = 0; i < array.size(); i++) {
		o << array[i] << " ";
	}
	return (o);
}

#endif