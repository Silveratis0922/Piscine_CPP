/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:38 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 14:54:45 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void); //default constructor
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src); //copy constructor
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs); //copy assignment operator
		~PresidentialPardonForm(void); //destructor

		void        execute(Bureaucrat const & executor);
		std::string	getTarget(void) const;

	private:
		std::string 		_target;
};

std::ostream&   operator<<(std::ostream& o, PresidentialPardonForm const & a);

#endif
