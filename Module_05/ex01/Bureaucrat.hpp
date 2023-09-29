/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:22:02 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/29 18:04:47 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
//#include "Form.hpp"

class	Bureaucrat
{
	public:
		Bureaucrat(void); //default constructor
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const & copy); //copy constructor
		Bureaucrat & operator=(Bureaucrat const & egl); //copy assignment operator
		~Bureaucrat(void); //destructor

		const std::string	getName(void) const;
		unsigned int		getGrade(void) const;
		void				signForm(Form const & f);
		void				setAsk(bool);

		Bureaucrat			operator++(int);
		Bureaucrat			operator--(int);
		Bureaucrat&			operator++(void);
		Bureaucrat&			operator--(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & a);

#endif
