/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:22:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/29 17:53:24 by tchantro         ###   ########.fr       */
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
	std::cout << "Bureaucrat " << name << " parametric constructor called" << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
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

void	Bureaucrate::setAsk(bool)
{
	this->_ask = true;
}

Bureaucrat		Bureaucrat::operator++(int)
{
	Bureaucrat	tmp = *this;
	++*this;
	return (tmp);
}
Bureaucrat		Bureaucrat::operator--(int)
{
	Bureaucrat	tmp = *this;
	--*this;
	return (tmp);
}

Bureaucrat&		Bureaucrat::operator++(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		--_grade;
	return (*this);
}

Bureaucrat&		Bureaucrat::operator--(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		++_grade;
	return (*this);
}

void	Bureaucrat::signForm(Form const & f)
{
	if (f.getSigned() == true)
		std::cout << _name << " signed " << f.getname() << std::endl;
	else if (_ask == false)
	{
		std::cout << _name << " couldn't sign " << f.getName() << " because ";
		std::cout << " not asking again." << std::endl;
	}
	else 
	{
		std::cout << _name << " couldn't sign " << f.getName() << " because ";
		throw GradeTooLowEcepion();
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & a)
{
	o << a.getName() << ", bureaucrat grade " << a.getGrade() << ".";
	return (o);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Bureaucrat is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Bureaucrat is too low.");
}
