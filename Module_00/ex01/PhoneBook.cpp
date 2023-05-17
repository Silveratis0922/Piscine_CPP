/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:16:41 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/17 17:26:11 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::search(void)
{
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	std::cout << "          |          |          |          |" << std::endl;
	std::cout << "         1|          |          |          |" << std::endl;
	std::cout << "         2|          |          |          |" << std::endl;
	std::cout << "         3|          |          |          |" << std::endl;
	std::cout << "         4|          |          |          |" << std::endl;
	std::cout << "         5|          |          |          |" << std::endl;
	std::cout << "         6|          |          |          |" << std::endl;
	std::cout << "         7|          |          |          |" << std::endl;
	std::cout << "         8|          |          |          |" << std::endl;
}

/*if (buff.size() > 10)
 *{
    buff.resize(9);
    buff.resize(10, '.');
 }
 */
