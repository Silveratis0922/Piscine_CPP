/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:00:00 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/10 13:26:54 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
	}
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
	return ;
}

bool	ScalarConverter::isChar(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << "This is a char: '" << str << "'" << std::endl;
		char 	c = str[0];

		std::cout << std::fixed;
		if (c < 32)
			std::cout << "char   : Non displayable" << std::endl;
		else
			std::cout << "char   : " << c << std::endl;
		std::cout << "int    : " << static_cast<int>(c) << std::endl;
		std::cout << "float  : " << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;

		return (true);
	}
	else
		return (false);
 }

bool	ScalarConverter::isInt(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i])  && !(i == 0 && str[i] == '-'))
			return (false);
	}	
	std::cout << "This is an int: '" << str << "'" << std::endl;
	if (str.length() > 11 || strtol(str.c_str(), NULL, 10) > std::numeric_limits<int>::max()
			|| strtol(str.c_str(), NULL, 10) < std::numeric_limits<int>::min())
	{
		std::cout << "char   : Not in char range" << std::endl;
		std::cout << "int    : Int overflow" << std::endl;
		std::cout << "float  : Int overflow" << std::endl;
		std::cout << "double : Int overflow" << std::endl;
		return (true);
	}
	else
	{
			int	i = atoi(str.c_str());
			std::cout << std::fixed;
		if (i > 127 || i < 0)
			std::cout << "char   : Not in char range" << std::endl;
		else if (i < 32)
			std::cout << "char   : Not displayable" << std::endl;
		else
			std::cout << "char   : " << static_cast<char>(i) << std::endl;
		std::cout << "int    : " << i << std::endl;
		std::cout << "float  : " << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(i) << std::endl;
		return (true);
	}
}

bool	ScalarConverter::isFloat(std::string str)
{
	if (str[str.length() - 1] == 'f' || str == "nanf" || str == "-inff" || str == "+inff")
	{
		std::cout << "This is a float: '" << str << "'" << std::endl;
		return (true);
	}
	else
		return (false);
}

bool	ScalarConverter::isDouble(std::string str)
{
	if (str.at(1) == '.' || str == "nan" || str == "-inf" || str == "+inf")
	{
		std::cout << "This is a double '" << str << "'" << std::endl;
		return (true);
	}
	else
		return (false);
}

void	ScalarConverter::convert(std::string str)
{
	bool	(*checking[])(std::string) = 
	{
		&ScalarConverter::isChar,
		&ScalarConverter::isInt,
		&ScalarConverter::isFloat,
		&ScalarConverter::isDouble
	};
	bool	found = false;
	for (int i = 0; i < 4; i++)
	{
		if (checking[i](str))
		{
			found = true;
			break;
		}
	}
	if (!found)
		std::cout << "Please enter char, int, float or double." << std::endl;
}
