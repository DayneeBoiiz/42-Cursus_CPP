/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:05:31 by sayar             #+#    #+#             */
/*   Updated: 2023/03/15 19:30:27 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
	this->database = "";
}

BitcoinExchange::~BitcoinExchange(void) {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	(void)other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	(void)other;
	return (*this);
}

void	BitcoinExchange::ParseDataSyntax(std::string str) {

	std::string date = str.substr(0, str.find(','));
	std::string exchange = str.substr(str.find(',') + 1, str.length());
	ParsedDataBase.insert(std::pair<std::string, float>(date, std::stof(exchange)));
}

void	BitcoinExchange::ParseDataBase(std::string file) {

	std::ifstream	read;
	std::string		copy;

	read.open(file, std::ios::in);
	if (read.is_open()) {

		while (!read.eof()) {
			std::getline(read, copy);
			if (copy != "date,exchange_rate")
				ParseDataSyntax(copy);
		}
	}
	else
		throw std::runtime_error("Error: could not open file.");
}

float	BitcoinExchange::Exchange(float first, float second) {

	std::cout << "Base " << first << std::endl;
	std::cout << "Input "<< second << std::endl;

	return (1.2);

}

void	BitcoinExchange::PrintData(void) {

	// for (map_it it = ParsedDataBase.begin(); it != ParsedDataBase.end(); it++) {
	// 	std::cout << (*it).second << std::endl;
	// }

}

void	BitcoinExchange::CalculateExchange(void) {

	// float result;

	// for (map_it it = ParsedDataInput.begin(); it != ParsedDataInput.end(); it++) {
	// 	// map_it date_it = ParsedDataBase.find((*it).first);
	// 	auto date_it = std::find(ParsedDataBase.begin(), ParsedDataBase.end(), (*it).first);
	// 	std::cout << (*date_it).first << std::endl;
	// 	// result = Exchange((*date_it).second, (*it).second);
	// }

	// float result;

    // for (map_it it = ParsedDataInput.begin(); it != ParsedDataInput.end(); it++) {
	// 	std::cout << "===> " << (*it).first << std::endl;

    // for (map_it it = ParsedDataInput.begin(); it != ParsedDataInput.end(); it++) {
	// 	std::cout << "===> " << (*it).first << std::endl;
    //     map_it date_it = ParsedDataBase.find((*it).first); // using map::find
    //     if (date_it != ParsedDataBase.end()) {
    //         std::cout << (*date_it).first << std::endl;
    //         // result = Exchange((*date_it).second, (*it).second);
    //     }
        // else {
        //     std::cout << "Key " << (*it).first << " not found in ParsedDataBase" << std::endl;
        // }
    // }
}

bool BitcoinExchange::is_valid_date(std::string date_str) {
    // Check the length of the string
    if (date_str.length() != 10) {
        return false;
    }

    // Extract the year, month, and day components
    int year = 0, month = 0, day = 0;
    if (sscanf(date_str.c_str(), "%d-%d-%d", &year, &month, &day) != 3) {
        return false;
    }

    // Check if the year is within a valid range
    if (year < 0 || year > 9999) {
        return false;
    }

    // Check if the month is within a valid range
    if (month < 1 || month > 12) {
        return false;
    }

    // Check if the day is within a valid range
    if (day < 1 || day > 31) {
        return false;
    }

    // Check if the day is valid for the given month
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) {
        return false;
    } else if (month == 2) {
        // Leap year calculation: divisible by 4 and not by 100, or divisible by 400
        bool is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if ((is_leap_year && day > 29) || (!is_leap_year && day > 28)) {
            return false;
        }
    }

    // All checks passed, the date is valid
    return true;
}

std::string BitcoinExchange::FindBaseDate(std::string str) {

	for (map_it it = ParsedDataBase.begin(); it != ParsedDataBase.end(); it++) {
		if (it.operator*(). first == str)
			return (it.operator*().first);
	}
	return ("Date not found in the Database");
}

float BitcoinExchange::FindBaseExchange(std::string str) {

	for (map_it it = ParsedDataBase.begin(); it != ParsedDataBase.end(); it++) {
		if (it.operator*(). first == str)
			return (it.operator*().second);
	}
	return (0);

}

void	BitcoinExchange::OutputData(std::string BaseDate, float BaseExchange, std::string exchange, std::string date) {

	// std::cout << BaseDate << " " << BaseExchange << " " << exchange << std::endl;
	(void)BaseExchange;
	if (!is_valid_date(date))
		std::cout << "Error: bad input => " << date << std::endl;
	else if (!BaseDate.compare("Date not found in the Database"))
		std::cout << date << " => " << "Date not found in the Database" << std::endl;
	else if (std::stof(exchange) < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (std::stof(exchange) > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else {
		float result = (std::stof(exchange) * BaseExchange);
		std::cout << BaseDate << " => " << exchange << " = " << result << std::endl;
	}
}

void	BitcoinExchange::ParseDataSyntaxInput(std::string str) {
	std::string date = str.substr(0, str.find('|') - 1);
	std::string exchange = str.substr(str.find('|') + 2 , str.length());

	// if (is_valid_date(date) == false)
	// 	std::cout << "Error: bad input => " << date << std::endl;
	std::string BaseDate = FindBaseDate(date);
	float BaseExchange = FindBaseExchange(date);

	// std::cout << BaseExchange << std::endl;
	OutputData(BaseDate, BaseExchange, exchange, date);
	// std::cout << date << " => " << BaseDate << std::endl;

	// ParsedDataInput.insert(std::pair<std::string, float>(date, std::stof(exchange)));
}

void	BitcoinExchange::ParseInput(std::string input) {

	std::ifstream	read;
	std::string		copy;

	read.open(input, std::ios::in);
	if (read.is_open()) {

		while (!read.eof()) {
			std::getline(read, copy);
			if (copy != "date | value") {
				ParseDataSyntaxInput(copy);
				// exit(0);
			}
		}
		// for (map_it it = ParsedDataInput.begin(); it != ParsedDataInput.end(); it++) {
		// 	std::cout << "Parsed Base Data ---> " << (*it).first << std::endl;
		// 	std::cout << "Parsed Base Data ---> " << (*it).second << std::endl;
		// }
	}
	else
		throw std::runtime_error("Error: could not open file.");
}
