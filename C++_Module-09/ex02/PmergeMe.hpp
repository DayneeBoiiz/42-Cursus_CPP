/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:23:26 by sayar             #+#    #+#             */
/*   Updated: 2023/03/16 16:59:08 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMEREGME_HPP
# define PMEREGME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <sstream>
# include <unordered_set>

class PmergeMe {

private:
	std::vector<int>	Input;
	std::deque<int>		input_d;

public:

	PmergeMe(void);
	~PmergeMe(void);
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &other);

	void				ParseAv(char **av, int ac);
	std::vector<int>	merge_insert_sort(void);
	std::vector<int>	merge_insert_sort(std::vector<int> vec);
	std::vector<int>	merge(std::vector<int> left, std::vector<int> right);
	std::string			join_strings(char **av, const std::string& delimiter, int ac);
	bool				hasDuplicate(const std::string &numbers);

};


#endif