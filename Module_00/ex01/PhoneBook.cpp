/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:16:41 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/22 18:28:20 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::print_first_name(int j)
{
	std::string	str = this->tab[j].get_first_name();
	int	size = str.size();
	
	if (size > 10)
	{
		str.resize(9);
		str.resize(10, '.');
		std::cout << str << "|";
	}
	else if (size < 10)
		std::cout << std::setw(10) << str << "|";
	else
		std::cout << str << "|";
}

void	PhoneBook::print_last_name(int j)
{
	std::string	str = this->tab[j].get_last_name();
	int	size = str.size();

	if (size > 10)
	{
		str.resize(9);
		str.resize(10, '.');
		std::cout << str << "|";
	}
	else if (size < 10)
		std::cout << std::setw(10) << str << "|";
	else
		std::cout << str << "|";
}

void	PhoneBook::print_nickname(int j)
{
	std::string	str = this->tab[j].get_nickname();
	int	size = str.size();
	
	if (size > 10)
	{
		str.resize(9);
		str.resize(10, '.');
		std::cout << str << "|" << std::endl;
	}
	else if (size < 10)
		std::cout << std::setw(10) << str << "|" << std::endl;
	else
		std::cout << str << "|" << std::endl;
}

void	PhoneBook::print_index_info(void)
{
		std::string	str;
		int			size = 0;
		int			index;

		std::cout << "For more information enter a number between 1 and 8: ";
		std::getline(std::cin, str);
		size = str.size();
		if (size != 1)
		{
			std::cout << "Sorry, I don't understand. Back to menu." << std::endl;
			return ;
		}
		index = (int)str[0] - 48;
		if (index > 0 && index < 9)
			print_info(index - 1);
		else
		{
			std::cout << "Index is not between 1 and 8. Back to menu." << std::endl;
			return ;
		}
}

void	PhoneBook::search(void)
{
	int i = 0;
	int	j = 0;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	while (i < 4)
	{
		std::cout << std::setw(11) << "|";
		i++;
	}
	std::cout << std::endl;
	while (j < 8)
	{
		i = 0;
		while (i < 4)
		{
			if (i == 0)
				std::cout << std::setw(10) << j + 1 << "|";
			else if (i == 1)
				print_first_name(j);
			else if (i == 2)
				print_last_name(j);
			else if (i == 3)
				print_nickname(j);
			i++;
		}
		j++;
	}
}

void	PhoneBook::add_info(int i)
{
	this->tab[i].first_step();
	this->tab[i].second_step();
	this->tab[i].third_step();
	this->tab[i].fourth_step();
	this->tab[i].fifth_step();

}

void	PhoneBook::print_info(int i)
{
	int	j = i + 1;
	std::cout << "First name[" << j << "]: " << this->tab[i].get_first_name() << std::endl;
	std::cout << "Last name[" << j << "]: " << this->tab[i].get_last_name() << std::endl;
	std::cout << "Nickname[" << j << "]: " << this->tab[i].get_nickname() << std::endl;
	std::cout << "Phone number[" << j << "]: " << this->tab[i].get_phone_number() << std::endl;
	std::cout << "Darkest secret[" << j << "]: " << this->tab[i].get_secret() << std::endl;
}
