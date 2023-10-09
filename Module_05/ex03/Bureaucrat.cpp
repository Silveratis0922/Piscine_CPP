/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:22:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 17:16:19 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("No_name"), _grade(1)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	_ask = false;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat " << name << " parametric constructor called" << std::endl;
	_ask = false;
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
		this->_ask = egl._ask;
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

bool	Bureaucrat::getAsk(void) const
{
	return (this->_ask);
}

void	Bureaucrat::setAsk(void)
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

void	Bureaucrat::signForm(AForm const & f)
{
	if (f.getSigned() == true && _ask == true)
		std::cout << _name << " signed " << f.getName() << std::endl;
	else if (_ask == false)
	{
		std::cout << _name << " couldn't sign " << f.getName() << " because ";
		std::cout << "not asking again." << std::endl;
	}
	else 
	{
		std::cout << _name << " couldn't sign " << f.getName();
		std::cout << " because grade too low" << std::endl;
	}
}

void	Bureaucrat::excuteForm(AForm const & f)
{
	if (f.getSigned() == true && getGrade() > _grade)
		std::cout << _name << " executed " << f.getName() << std::endl;
	else if (f.getSigned() == false)
		std::cout << f.getName() << " is not signed already" << std::endl;
	else if (getGrade() < _grade)
		std::cout << "Bureaucrate " << _name << " grade is too low for executing it." << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & a)
{
	o << a.getName() << ", bureaucrat grade " << a.getGrade() << " and ask = " << a.getAsk() << ".";
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
