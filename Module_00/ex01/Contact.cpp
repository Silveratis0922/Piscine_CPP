/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:27:01 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/22 14:58:34 by tchantro         ###   ########.fr       */
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


void	Contact::first_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, str);
	}
	this->first_name = str;
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

void	Contact::second_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your second name: ";
		std::getline(std::cin, str);
	}
	this->last_name = str;
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

void	Contact::third_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, str);
	}
	this->nickname = str;
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

void	Contact::fourth_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, str);
	}
	this->phone_number = str;
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

void	Contact::fifth_step(void)
{
	std::string str;

	str.clear();
	while (str.empty() == 1)
	{
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, str);
	}
	this->darkest_secret = str;
}

std::string	Contact::get_secret(void)
{
	return (this->darkest_secret);
}
