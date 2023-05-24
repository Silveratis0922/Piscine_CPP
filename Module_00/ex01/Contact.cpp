/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:27:01 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/24 14:41:02 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::first_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "Ctrl + D. Leaving the program." << std::endl;
			return (1);
		}
	}
	this->first_name = str;
	return (0);
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

int	Contact::second_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your second name: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "Ctrl + D. Leaving the program." << std::endl;
			return (1);
		}
	}
	this->last_name = str;
	return (0);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

int	Contact::third_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "Ctrl + D. Leaving the program." << std::endl;
			return (1);
		}
	}
	this->nickname = str;
	return (0);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

int	Contact::fourth_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "Ctrl + D. Leaving the program." << std::endl;
			return (1);
		}
	}
	this->phone_number = str;
	return (0);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

int	Contact::fifth_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "Ctrl + D. Leaving the program." << std::endl;
			return (1);
		}
	}
	this->darkest_secret = str;
	return (0);
}

std::string	Contact::get_secret(void)
{
	return (this->darkest_secret);
}
