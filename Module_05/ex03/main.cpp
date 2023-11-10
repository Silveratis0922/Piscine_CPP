/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:30:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/09 14:33:08 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//ShrubberyCreationForm  		Required grades: sign 145, exec 137
//RobotomyRequestForm			Required grades: sign 72, exec 45
//PresidentialPardonForm		Required grades: sign 25, exec 5

int	main(void)
{
	Bureaucrat	james("James", 132);
	Bureaucrat	jim("Jim", 47);
	Bureaucrat	jack("Jack", 26);
	Bureaucrat	joe("Joe", 5);
	Intern 		someRandomIntern;

	std::cout << std::endl;
	AForm*	s = someRandomIntern.makeForm("shrubbery creation", "garden");
	std::cout << std::endl;
	AForm*	r = someRandomIntern.makeForm("robotomy request", "Your neighbour");
	std::cout << std::endl;
	AForm*	p = someRandomIntern.makeForm("presidential pardon", "John");
	std::cout << std::endl;
	AForm*	wrongForm = someRandomIntern.makeForm("unknowned form", "Nemo");
	std::cout << std::endl;

	// *** James -> Shrubbery Creation Form ***
	std::cout << james << std::endl;
	try
	{
		std::cout << "James wants to execute Shrubbery Creation Form:" << std::endl;
		s->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "James wants to sign Shrubbery Creation Form:" << std::endl;
		s->beSigned(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "James wants to execute Shrubbery Creation Form:" << std::endl;
		s->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// *** Jim -> Robotomy Request Form ***
	std::cout << jim << std::endl;
	try
	{
		std::cout << "Jim wants to sign Shrubbery Creation Form:" << std::endl;
		r->beSigned(jim);
		std::cout << "Jim signed Shrubbery Creation Form!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Jim wants to execute Robotomy Request Form:" << std::endl;
		r->execute(jim);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// *** Jack -> Presidential Pardon Form ***
	std::cout << jack << std::endl;
	try
	{
		std::cout << "Jack wants to execute Presidential Pardon Forn:" << std::endl;
		p->execute(jack);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Jack wants to sign Presidential Pardon Form:" << std::endl;
		p->beSigned(jack);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// *** Joe -> Presidential Pardon Form ***
	std::cout << joe;
	try
	{
		std::cout << "Joe wants to sign Presidential Pardon Form:" << std::endl;
		p->beSigned(joe);
		std::cout << "Joe signed Presidential Pardon Form!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Joe wants to execute Presidential Pardon Form:" << std::endl;
		p->execute(joe);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete s;
	delete r;
	delete p;
	delete wrongForm;
	return (0);
}
