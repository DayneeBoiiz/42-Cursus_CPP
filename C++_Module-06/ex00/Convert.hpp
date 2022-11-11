/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:29:01 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 15:52:05 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <limits>
# include <stdexcept>
# include <fstream>

enum e_type {
	NONE,
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
	LITERALS
};

class Convert
{
private:
    char	_char;
	int		_int;
	float	_float;
	double	_double;
	bool	impossible;

	std::string	line;
	e_type		type;
public:
	Convert(void);
	~Convert(void);
	Convert(const Convert& other);
	Convert & operator=(const Convert& other);

	int		getInt(void) const;
	float	getFloat(void) const;
	double	getDouble(void) const;
	char	getChar(void) const;

	void	setInt(int value);
	void	setFloat(float value);
	void	setDouble(double value);
	void	setChar(char value);

	void	setType(void);
	e_type	getType(void) const;

	void	setLine(std::string str);
	std::string	getLine(void) const;

	bool	isChar(void) const;
	bool	isFloat(void) const;
	bool	isDouble(void) const;
	bool	isLiteral(void) const;
	bool	isInt(void) const;
	bool	isImpossible(void);

    void    printFloat(void) const;
	void    printChar(void) const;
    void    printDouble(void) const;
    void    printInt(void) const;
	void	Converter(void);

public:
	class ConvertException : public std::exception
	{
	public:
		const char* what() const throw() {
			return ("Invalid Type");
		}
	};
};

std::ostream& operator<<(std::ostream& o, const Convert& other);

#endif