/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:21:34 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/17 17:26:19 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>


int	main(void)
{
	PhoneBook	repertory;
	Contact		contact;
	std::string buff;
	int			i = 0;

		while (buff != "EXIT")
		{
			std::cout << "Enter your command: ";
			std::getline(std::cin, buff);
			if (buff == "ADD")
			{
				contact.first_step();
				contact.second_step();
				contact.third_step();
				contact.fourth_step();
				contact.fifth_step();
				i++;
			}
			else if (buff == "SEARCH")
				repertory.search();
			else if (buff != "EXIT" && buff.size() != 0)
			{
				std::cout << "Wrong argument. ";
				std::cout << "Please enter ADD, SEARCH or EXIT." << std::endl;
			}
		}
	return (0);
}
