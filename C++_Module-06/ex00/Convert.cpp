/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:13:46 by sayar             #+#    #+#             */
/*   Updated: 2022/11/10 15:52:39 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	this->_char = '\0';
	this->_int = 0;
	this->_double = 0.0;
	this->_float = 0.0f;
}

Convert::~Convert(void)
{}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert & Convert::operator=(const Convert& other)
{
	this->_char = other.getChar();
	this->_int	= other.getInt();
	this->_float = other.getFloat();
	this->_double = other.getDouble();
	return (*this);
}

void	Convert::setType(void) {
	if (isChar()) {
		this->type = CHAR;
	}
	else if (isInt()) {
		type = INT;
	}
	else if (isDouble()) {
		type = DOUBLE;
	}
	else if (isFloat()) {
		type = FLOAT;
	}
	else if (isLiteral()) {
		type = LITERALS;
	}
	else
		type = NONE;
}

bool	Convert::isImpossible(void) {
	try
    {
        if ( type == INT ) {
            _int = std::stoi(line);
        } else if ( type == FLOAT ) {
            _float = std::stof(line);
        } else if ( type == DOUBLE ) {
            _double = std::stod(line);
        }
    }
    catch ( std::exception& e )
    {
        impossible = (true);
        return (true);
    }
    return (false);
}

std::string Convert::getLine(void) const {
	return (this->line);
}

void	Convert::setLine(std::string str) {
	this->line = str;
	this->setType();
	if (getType() == NONE)
		throw Convert::ConvertException();
}

char	Convert::getChar(void) const {
	return (this->_char);
}

int	Convert::getInt(void) const {
	return (this->_int);
}

double	Convert::getDouble(void) const {
	return (this->_double);
}

float	Convert::getFloat(void) const {
	return (this->_double);
}

void	Convert::setChar(char value) {
	this->_char = value;
}

void	Convert::setDouble(double value) {
	this->_double = value;
}

void	Convert::setFloat(float value) {
	this->_float = value;
}

void	Convert::setInt(int value) {
	this->_int = value;
}

e_type	Convert::getType(void) const {
	return (this->type);
}

bool	Convert::isInt(void) const {
	int   j = 0;
    if ( line[j] == '-' || line[j] == '+' ) {
        j++;
	}

	for (int i(j); i < (int)line.length(); i++) {
		if ( !std::isdigit( line[i] ) )
        	return (false);
	}
	return (true);
}

bool	Convert::isChar(void) const {
	 return (line.length() == 1 && std::isalpha( line[0] ) && std::isprint( line[0] ));
}

bool	Convert::isDouble(void) const {
	if ( line.find( '.' ) == std::string::npos || line.find( '.' ) == 0
        || line.find( '.' ) == line.length() - 1 )
        return (false);
    int j = 0;
    int found = 0;
    if ( line[j] == '-' || line[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) line.length(); i++ ) {
        if ( line[i] == '.' )
            found++;
        if ( ( !std::isdigit( line[i] ) && line[i] != '.' ) || found > 1 )
            return (false);
    }

    return (true);
}

bool	Convert::isFloat(void) const {
	    if ( line.find( '.' ) == std::string::npos || line.back() != 'f'
        || line.find( '.' ) == 0 || line.find( '.' ) == line.length() - 2 )
        return (false);
    int found = 0;
    int j = 0;
    if ( line[j] == '-' || line[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) line.length() - 1; i++ ) {
        if ( line[i] == '.' )
            found++;
        if ( ( !std::isdigit( line[i] ) && line[i] != '.' ) || found > 1 )
            return (false);
    }

    return (true);
}

bool	Convert::isLiteral(void) const {
	if ( ( impossible ) || ( line.compare( "nan" ) == 0 ) || ( line.compare( "nanf" ) == 0 )
        || ( line.compare( "+inf" ) == 0 ) || ( line.compare( "+inff" ) == 0 )
        || ( line.compare( "-inf" ) == 0 ) || ( line.compare( "-inff" ) == 0 )
        || ( line.compare( "-inff" ) == 0 ) || ( line.compare( "-inff" ) == 0 )
        || ( line.compare( "+inff" ) == 0 ) || ( line.compare( "+inff" ) == 0 ) ) {
            return (true);
    }
    return (false);
}

void	Convert::printChar(void) const {
	if (this->isLiteral() || (!std::isprint(_int) && (_int > 127)))
		std::cout << "Impossible";
	else if (!std::isprint(_int))
		std::cout << "None displayable";
	else
		std::cout << "'" << getChar() << "'";
	std::cout << std::endl;
}

void	Convert::printDouble(void) const {
	if (line.compare("nan") == 0 || line.compare("nanf") == 0)
		std::cout << "nan";
	else if (line.compare("+inff") == 0 || line.compare("+inf") == 0)
		std::cout << "+inf";
	else if (line.compare("-inff") == 0 || line.compare("-inf") == 0)
		std::cout << "-inf";
	else if (impossible)
		std::cout << "Impossible";
	else {
		if (_double - static_cast<int>(_double) == 0)
			std::cout << _double << ".0";
		else
			std::cout << getDouble() << "f";
	}
	std::cout << std::endl;
}

void	Convert::printFloat(void) const {
	if (line.compare("nan") == 0 || line.compare("nanf") == 0)
		std::cout << "nanf";
	else if (line.compare("+inff") == 0 || line.compare("+inf") == 0)
		std::cout << "+inff";
	else if (line.compare("-inff") == 0 || line.compare("-inf") == 0)
		std::cout << "+inff";
	else if (impossible)
		std::cout << "Impossible";
	else {
		if (_double - static_cast<int>(_double) == 0)
			std::cout << _double << ".0f";
		else
			std::cout << getDouble() << "f";
	}
	std::cout << std::endl;
}

void	Convert::printInt(void) const {
	if (isLiteral() || (!std::isprint(_int) && (_int > 127)))
		std::cout << "Impossible";
	else
		std::cout << getInt();
	std::cout << std::endl;
}

std::ostream & operator<<( std::ostream& o, const Convert& other ) {
    o << "char: "; other.printChar();
    o << "int: "; other.printInt();
    o << "float: "; other.printFloat();
    o << "double: "; other.printDouble();
    return (o);
}

void	Convert::Converter(void) {
	if (isImpossible())
		return ;
	switch (type) {
	case (INT):
		_int =	std::stoi(line);
		_char = static_cast<char>(_int);
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
		break ;
	case (DOUBLE):
		_double = std::stod(line);
		_char = static_cast<char>(_double);
		_int = static_cast<int>(_double);
		_float = static_cast<float>(_double);
		break ;
	case (FLOAT) :
		_float = std::stof(line);
		_char = static_cast<char>(_float);
		_int = static_cast<int>(_float);
		_double = static_cast<double>(_float);
		break ;
	case (CHAR) :
		_char = line[0];
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
		break ;
	default :
		break ;
	}
}
