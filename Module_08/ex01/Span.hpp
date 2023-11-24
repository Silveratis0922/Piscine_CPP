#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>
#include <exception>

class	Span
{
	public:
		Span(unsigned int n);
		Span(Span const & src); //copy constructor
		Span & operator=(Span const & rhs); //copy assignment operator
		~Span(void); //destructor

		void					addNumber(int nbr);
		void					addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int						shortestSpan(void);
		int						longestSpan(void);
		std::vector<int>		getVector(void) const;

		class	FullyFill : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class	NotFilledEnough : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		Span(void); //default constructor
		int					_size;
		int					_add;
		std::vector<int>	_vector;
};

std::ostream&   operator<<(std::ostream& o, Span const & a);

#endif
