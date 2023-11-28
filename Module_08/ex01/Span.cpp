#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span Default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int n) : _size(n), _add(0)
{
	_vector.resize(n);
	return ;
}

Span::Span(Span const & src)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	std::cout << "Span Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_add = rhs._add;
		this->_vector = rhs._vector;
	}
	return (*this);
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int nbr)
{
	std::vector<int>::iterator	it = _vector.begin() + _add;

	if (_add == _size)
		throw FullyFill();
	else
	{
		*it = nbr;
		_add++;
	}
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		std::cout << "add = " << _add << std::endl;
		std::cout << *begin << std::endl;
		if (_add == _size)
			throw FullyFill();
		else
			addNumber(*begin);
		begin++;
	}
}

int		Span::shortestSpan(void)
{
	if (_add > 1)
	{
		int	i = 0;
		int res = std::abs(_vector[0] - _vector[1]);
		for (;i < _size - 1; i++)
		{
			int	j = i + 1;
			for(;j < _size; j++)
			{
				if (std::abs(_vector[i] - _vector[j]) < res)
					res = std::abs(_vector[i] - _vector[j]);
			}
		}
		return (res);
	}
	else
		throw NotFilledEnough();

}

int		Span::longestSpan(void)
{
	if (_add > 1)
	{
		int i = 0;
		int res = 0;
		for (;i < _size - 1; i++)
		{
			int j = i + 1;
			for (;j < _size; j++)
			{
				if (std::abs(_vector[i] - _vector[j]) > res)
					res = std::abs(_vector[i] - _vector[j]);
			}
		}
		return (res);
	}
	else
		throw NotFilledEnough();
}

std::vector<int>		Span::getVector(void) const
{
	return (this->_vector);
}

const char*	Span::FullyFill::what() const throw()
{
	return ("You can't add anymore number. It's full !");
}

const char*	Span::NotFilledEnough::what() const throw()
{
	return ("Distance can't be calculate, not enough number.");
}

std::ostream&   operator<<(std::ostream& o, Span const & a)
{
	std::vector<int>	print = a.getVector();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = print.end();

	int i = 0;

	for (it = print.begin(); it != ite; it++)
	{
		o << "it[" << i << "] = : " << *it << std::endl;
		i++;
	}
	return (o);
}
