/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:39:25 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 11:42:35 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public:
		AForm(void); //default constructor
		AForm(const std::string name, int sig, int exe);
		AForm(AForm const & src); //copy constructor
		AForm & operator=(AForm const & rhs); //copy assignment operator
		virtual ~AForm(void); //destructor
		
		const std::string	getName(void) const;
		unsigned int		getExeGrade(void) const;
		unsigned int		getSigGrade(void) const;
		bool				getSigned(void) const;
		void				beSigned(Bureaucrat & b);
		virtual void		execute(Bureaucrat const & executor) = 0;


		class	GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	ExecTooLowException : public std::exception
		{
			public:
				const char* what() const throw ();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_sig_grade;
		const unsigned int	_exe_grade;
};

std::ostream&	operator<<(std::ostream& o,	AForm const & a);

#endif
