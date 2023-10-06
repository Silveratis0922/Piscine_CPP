/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:38 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 15:33:29 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void); //default constructor
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src); //copy constructor
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); //copy assignment operator
		~ShrubberyCreationForm(void); //destructor

		void        execute(Bureaucrat const & executor);
		std::string	getTarget(void) const;

	protected:
	private:
		std::string	_target;
};

std::ostream&   operator<<(std::ostream& o, ShrubberyCreationForm const & a);

#endif
