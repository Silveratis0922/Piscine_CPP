/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:39:25 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 14:01:51 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("No_name"), _sig_grade(1), _exe_grade(1)
{
	std::cout << "AForm Default constructor called" << std::endl;
	_signed = false;
	return ;
}

AForm::AForm(const std::string name, int sig, int exe) : _name(name), _sig_grade(sig), _exe_grade(exe)
{
	if (_sig_grade < 1 || _exe_grade < 1)
		throw GradeTooHighException();
	else if (_sig_grade > 150 || _exe_grade > 150)
		throw GradeTooLowException();
	else
	{
		std::cout << "AForm " << _name << " parametric contructor called" << std::endl;
		_signed = false;
	}
	return;
}

AForm::AForm(AForm const & src) : _name(src._name), _sig_grade(src._sig_grade), _exe_grade(src._exe_grade)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm Destructor called" << std::endl;
	return ;
}

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

unsigned int		AForm::getExeGrade(void) const
{
	return (this->_exe_grade);
}

unsigned int 		AForm::getSigGrade(void) const
{
	return (this->_sig_grade);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

void	AForm::beSigned(Bureaucrat & b)
{
	b.setAsk();
	if (_sig_grade < b.getGrade())
		throw GradeTooLowException();
	else
	{
		_signed = true;
		std::cout << "Form is signed." << std::endl;
	}
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade AForm is too high.");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade AForm is too low.");
}

const char*	AForm::ExecTooLowException::what() const throw()
{
	return ("Exec AForm is too low.");
}

std::ostream&	operator<<(std::ostream& o, AForm const & a)
{
	o << a.getName() << ", AForm signed need grade " << a.getSigGrade();
	o << " and for excute it need grade " << a.getExeGrade() << ". Signed = " << a.getSigned();
	return (o);
}
