/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:06:36 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/25 16:47:15 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
	return ;
}

Base*	generate(void)
{
	Base*	p;
	srand((unsigned) time(NULL));
	int		random = rand() % 3;

	if (random == 0)
		return (p = new A());
	else if (random == 1)
		return (p = new B());
	else
		return (p = new C());
}

void	identify(Base* p)
{
	A*	first = dynamic_cast<A*>(p);

	if (first != NULL)
		std::cout << "The type of the pointer is A." << std::endl;
	else
	{
		B*	second = dynamic_cast<B*>(p);

		if (second != NULL)
			std::cout << "The type if the pointer is B." << std::endl;
		else
		{
			C* third = dynamic_cast<C*>(p);

			if (third != NULL)
				std::cout << "The type of the pointer is C." << std::endl;
			else
				std::cout << "NULL pointer." << std::endl;
		}
	}
}

void	identify(Base& p)
{
	try
	{
		A& first = dynamic_cast<A&>(p);
		std::cout << "Reference type is A." << std::endl;
		(void)first;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			B& second = dynamic_cast<B&>(p);
			std::cout << "Reference type is B." << std::endl;
			(void)second;
		}
		catch(std::bad_cast &bc)
		{
			try
			{
				C& third = dynamic_cast<C&>(p);
				std::cout << "Reference type is C." << std::endl;
				(void)third;
			}
			catch(std::bad_cast &bc)
			{
					std::cout << "Error reference." << std::endl;
			}
		}
	}
}
