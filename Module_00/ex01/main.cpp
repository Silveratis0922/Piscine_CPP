/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:21:34 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/24 14:43:25 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <ios>
#include <iostream>
#include <string>


int	main(void)
{
	PhoneBook	repertory;
	Contact		contact;
	std::string buff;
	int	i = 0;

		while (buff != "EXIT")
		{

			std::cout << "Enter your command: ";
			std::getline(std::cin, buff);
			if (std::cin.eof())
			{
				std::cout << std::endl;
				std::cout << "Ctrl + D. Leaving the program." << std::endl;
				return (1);
			}
			if (buff == "ADD")
			{
				if (repertory.add_info(i))
					return (1);
				i++;
				if (i == 8)
					i = 0;
			}
			else if (buff == "SEARCH")
			{
				repertory.search();
				if (repertory.print_index_info())
					return (1);
				
			}
			else if (buff != "EXIT" && buff.size() != 0)
			{
				std::cout << "Wrong argument. ";
				std::cout << "Please enter ADD, SEARCH or EXIT." << std::endl;
			}
		}
	return (0);
}
