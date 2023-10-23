#include "utils.h"

bool	isChar(std::string str)
{
	if (str.length() == 1 && ((str.at(0) >= 0 && str.at(0) <= 47) || (str.at(0) >= 58 && str.at(0) <= 127)))
	{
		std::cout << "This is a char: '" << str << "'" << std::endl;
		return (true);
	}
	else
		return (false);
 }

 bool	isInt(std::string str)
 {
 	int	test = std::stoi(str);
	std::cout << " Test = " << test << std::endl;
	if (str.at(0) >= 48 && str.at(0) <= 57)
	{
		std::cout << "This is an int: '" << str << "'" << std::endl;
		return (true);
	}
	else
		return (false);
 }

 bool	isFloat(std::string str)
 {
	if (str.at(1) == 'f')
	{
		std::cout << "This is a float: '" << str << "'" << std::endl;
		return (true);
	}
	else
		return (false);
 }

 bool	isDouble(std::string str)
 {
	if (str.at(1) == '.')
	{
		std::cout << "This is a double '" << str << "'" << std::endl;
		return (true);
	}
	else
		return (false);
 }

