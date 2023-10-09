/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:38 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 15:18:18 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void); //default constructor
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src); //copy constructor
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); //copy assignment operator
		~RobotomyRequestForm(void); //destructor

		void        execute(Bureaucrat const & executor);
		std::string	getTarget(void) const;

	private:
		std::string	_target;
};

std::ostream&	operator<<(std::ostream& o, RobotomyRequestForm const & a);

#endif
