/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:22:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/26 14:44:50 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & egl)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;

	if (this != &egl)
	{
		this->_grade = egl._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
	return ;
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

Bureaucrat		Bureaucrat::operator++(int)
{
	Bureaucrat	tmp = *this;
	--*this;
	return (tmp);
}
Bureaucrat		Bureaucrat::operator--(int)
{
	Bureaucrat	tmp = *this;
	++*this;
	return (tmp);
}

Bureaucrat&		Bureaucrat::operator++(void)
{
	--_grade;
	return (*this);
}

Bureaucrat&		Bureaucrat::operator--(void)
{
	++_grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & a)
{
	o << a.getName() << ", bureaucrat grade " << a.getGrade() << ".";
	return (o);
}
