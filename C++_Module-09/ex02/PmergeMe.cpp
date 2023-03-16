/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:23:24 by sayar             #+#    #+#             */
/*   Updated: 2023/03/16 22:58:24 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {

}

PmergeMe::~PmergeMe(void) {

}

PmergeMe::PmergeMe(const PmergeMe &other) {
	(void)other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	(void)other;

	return (*this);
}

std::vector<int>	PmergeMe::merge(std::vector<int> left, std::vector<int> right) {

	std::vector<int> _return;

	size_t i = 0, j = 0;

	while (i < left.size() && j < right.size()) {

		if (left[i] < right[j])
			_return.push_back(left[i++]);
		else
			_return.push_back(right[i++]);
	}

	while (i < left.size()) {
		_return.push_back(left[i++]);
	}

	while (j < right.size()) {
		_return.push_back(right[j++]);
	}

	return (_return);

}

std::vector<int>	PmergeMe::merge_insert_sort(std::vector<int> vec) {

	const int insertion_threshhold = 32;

	if (vec.size() <= insertion_threshhold) {
		std::sort(vec.begin(), vec.end());
		return (vec);
	}

	int middle = vec.size() / 2;
	std::vector<int> left(vec.begin(), vec.begin() + middle);
	std::vector<int> right(vec.begin() + middle, vec.end());

	left = merge_insert_sort(left);
	right = merge_insert_sort(right);

	return (merge(left, right));

}

std::vector<int>	PmergeMe::merge_insert_sort(void) {

	std::vector<int> sorted = merge_insert_sort(Input);

	return (sorted);
}

bool PmergeMe::hasDuplicate(const std::string& numbers) {

    std::istringstream ss(numbers);
    std::unordered_set<int> values;
    int value;
    while (ss >> value) {
        if (values.count(value) > 0) {
            return true;
        }
        values.insert(value);
    }
    return false;
}

void	PmergeMe::getAfter(std::vector<int> vec) {
	std::cout << "After:   ";
	for (size_t i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}

std::string	PmergeMe::getBefore(void) const {
	return (this->InitalInput);
}

std::string	PmergeMe::join_strings(char **av, const std::string &delimiter, int ac) {

	std::ostringstream oss;

	for (int i = 1; i != ac; i++) {
		if (i != 1) {
			oss << delimiter;
		}
		oss << av[i];
	}
	return (oss.str());
}

void	PmergeMe::ParseAv(char **av, int ac) {

	InitalInput = join_strings(av, " ", ac);

	// std::cout << string << std::endl;
	if (hasDuplicate(InitalInput))
		throw std::runtime_error("Error Duplicate");
	std::istringstream	ss(InitalInput);
	std::string			token;

	while (ss >> token) {
		int num = std::atoi(token.c_str());
		if (num > 0)
			Input.push_back(num);
		else
			throw std::runtime_error("Error");

	}

	// for (int i = 1; i != ac; i++) {
	// 	std::cout << av[i] << std::endl;
	// }
	// std::cout << "===> " << string << std::endl;


	// for (int i = 1; i != ac; i++) {
	// 	int num = std::atoi(av[i]);
	// 	if (num > 0)
	// 		Input.push_back(num);
	// 	else
	// 		throw std::runtime_error("Error");
	// }

}