/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:38 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 16:23:23 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), AForm("Shrubbery",145, 137)
{
	std::cout << "ShrubberyCreationForm Parametric constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return ;
}

std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (getSigned() == false)
		std::cout << getName() << " is not signed." << std::endl;
	else if (getExeGrade() < executor.getGrade())
		throw ExecTooLowException();
	else
	{
		std::string		filename = getTarget() + "_shrubbery";
		std::ofstream	form(filename.c_str());
		
	form << "              * *                         * *           " << std::endl;
    form << "           *    *  *                   *    *  *        " << std::endl;
    form << "      *  *    *     *  *          *  *    *     *  *    " << std::endl;
    form << "     *     *    *  *    *        *     *    *  *    *   " << std::endl;
    form << " * *   *    *    *    *   *  * *   *    *    *    *   * " << std::endl;
    form << " *     *  *    * * .#  *   * *     *  *    * * .#  *   *" << std::endl;
    form << " *   *     * #.  .# *   *    *   *     * #.  .# *   *   " << std::endl;
    form << "  *    \"#.  #: #\" * *   *   *    \"#.  #: #\" * *   * " << std::endl;
    form << " *   * *\"#. ##\"      *     *   * *\"#. ##\"      *    " << std::endl;
    form << "   *      \"###                *      \"###             " << std::endl;
    form << "            \"##                        \"##            " << std::endl;
    form << "              ##.                         ##.           " << std::endl;
    form << "              .##:                        .##:          " << std::endl;
    form << "              :###                        :###          " << std::endl;
    form << "              ;###                        ;###          " << std::endl;
    form << "            ,####.                      ,####.          " << std::endl;
    form.close();
	}
}

std::ostream&   operator<<(std::ostream& o, ShrubberyCreationForm const & a)
{
	o << a.getTarget() << " ShrubberyCreationForm have require grades: ";
//	o << " sign " << a.getSign() << " ," << " exec " << a.getExec();
	return (o);
}

