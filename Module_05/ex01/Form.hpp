/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:39:25 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/29 18:00:03 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class	Form
{
	public:
		Form(void); //default constructor
		Form(const std::string name, int sig, int exe);
		Form(Form const & src); //copy constructor
		Form & operator=(Form const & rhs); //copy assignment operator
		~Form(void); //destructor
		
		const std::string	getName(void) const;
		unsigned int		getExeGrade(void) const;
		unsigned int		getSigGrade(void) const;
		bool				getSigned(void) const;
		void				beSigned(Bureaucrat const & b);

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

	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_sig_grade;
		const unsigned int	_exe_grade;
		bool				_ask;
};

std::ostream&	operator<<(std::ostream& o,	Form const & a);

#endif
