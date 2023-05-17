/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:27:01 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/17 17:07:09 by tchantro         ###   ########.fr       */
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

	std::getline(std::cin, str);
	while (str.empty() == 1)
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, str);
	}
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
	str.clear();
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
}
/*
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	std::cout << "          |          |          |          |" << std::endl;
	std::cout << "         1|          |          |          |" << std::endl;
	std::cout << "         2|          |          |          |" << std::endl;
	std::cout << "         3|          |          |          |" << std::endl;
	std::cout << "         4|          |          |          |" << std::endl;
	std::cout << "         5|          |          |          |" << std::endl;
	std::cout << "         6|          |          |          |" << std::endl;
	std::cout << "         7|          |          |          |" << std::endl;
	std::cout << "         8|          |          |          |" << std::endl;*/
