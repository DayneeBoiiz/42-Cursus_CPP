/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:04:51 by sayar             #+#    #+#             */
/*   Updated: 2023/03/15 19:34:00 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

class BitcoinExchange {

private:
	typedef	std::multimap<std::string, float>::iterator	map_it;

	std::string 				database;
	std::multimap<std::string, float>	ParsedDataBase;


public:
	BitcoinExchange(void);
	~BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange &operator=(const BitcoinExchange &other);

	void	ParseDataBase(std::string file);
	void	ParseDataSyntax(std::string str);
	void	ParseInput(std::string input);
	void	ParseDataSyntaxInput(std::string str);

	void	PrintData(void);

	void	CalculateExchange(void);
	float	Exchange(float first, float second);

	std::string FindBaseDate(std::string str);
	float	FindBaseExchange(std::string str);
	bool	is_valid_date(std::string date_str);
	void	OutputData(std::string BaseDate, float BaseExchange, std::string exchange, std::string date);
};

#endif