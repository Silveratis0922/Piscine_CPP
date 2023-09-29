/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:39:25 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/29 18:01:03 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("No_name"), _sig_grade(1), _exe_grade(1)
{
	std::cout << "Form Default constructor called" << std::endl;
	_signed = false;
	return ;
}

Form::Form(const std::string name, int sig, int exe) : _name(name), _sig_grade(sig), _exe_grade(exe)
{
	if (_sig_grade < 1 || _exe_grade < 1)
		throw GradeTooHighException();
	else if (_sig_grade > 150 || _exe_grade > 150)
		throw GradeTooLowException();
	else
	{
		std::cout << "Form " << _name << " parametric contructor called" << std::endl;
		_signed = false;
	}
	return;
}

Form::Form(Form const & src) : _name(src._name), _sig_grade(src._sig_grade), _exe_grade(src._exe_grade)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

unsigned int		Form::getExeGrade(void) const
{
	return (this->_exe_grade);
}

unsigned int 		Form::getSigGrade(void) const
{
	return (this->_sig_grade);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (_sig_grade < b.getGrade())
		throw GradeTooLowException();
	else
	{
		_signed = true;
		//b.setAsk(_ask);
	}
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade Form is too high.");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade Form is too low.");
}

std::ostream&	operator<<(std::ostream& o, Form const & a)
{
	o << a.getName() << ", Form signed need grade " << a.getSigGrade();
	o << " and for excute it need grade " << a.getExeGrade() << ". Signed = " << a.getSigned();
	return (o);
}
