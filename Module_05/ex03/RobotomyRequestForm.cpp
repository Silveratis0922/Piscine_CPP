/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:38 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 15:48:56 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Parametric constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (getSigned() == false)
		std::cout << getName() << " is not signed." << std::endl;
	else if (getExeGrade() < executor.getGrade())
		throw ExecTooLowException();
	else
	{
		srand((unsigned) time (NULL));

		int	random = rand() % 2;
		if (random == 0)
			std::cout << getTarget() << " request failed." << std::endl;
		else
			std::cout << "*GRRZZ* " << getTarget() << " successfully robotomized " << std::endl;
	}
}

std::string		RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream&   operator<<(std::ostream& o, RobotomyRequestForm const & a)
{
	o << a.getTarget() << " RobotomyRequestForm have require grades: ";
//	o << " sign " << a.getSign() << " ," << " exec " << a.getExec();
	return (o);
}
