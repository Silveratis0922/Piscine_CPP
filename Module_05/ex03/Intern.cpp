/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:42:43 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/09 14:31:15 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
	return ;
}

AForm*	Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	AForm*	(Intern::*fonction[])(std::string) =
	{
			&Intern::createShrubbery,
			&Intern::createRobotomy,
			&Intern::createPresidential
	};
	std::string	tab[] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (tab[i].compare(form) == 0)
		{
			std::cout << "Intern create " << tab[i] << std::endl;
			 return (this->*fonction[i])(target);
		}
	}
	std::cout << "Wrong name form." << std::endl;
	return (NULL);
}
