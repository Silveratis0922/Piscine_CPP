/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:39 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 15:49:38 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//int	PresidentialPardonForm::_sign = 25;
//int	PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presitential", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Parametric constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (getSigned() == false)
		std::cout << getName() << " is not signed." << std::endl;
	else if (getExeGrade() < executor.getGrade())
		throw ExecTooLowException();
	else
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string		PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream&   operator<<(std::ostream& o, PresidentialPardonForm const & a)
{
	o << a.getTarget() << " PresidentialPardonForm have require grades: ";
//	o << " sign " << a.getSign() << " ," << " exec " << a.getExec();
	return (o);
}
