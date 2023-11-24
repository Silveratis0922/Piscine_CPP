#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <deque>

template<typename T, class Container = std::deque<T> >

class	MutantStack : public std::stack<T>
{
public:
	MutantStack(void)
	{
		std::cout << "MutantStack Default constructor called" << std::endl;
		return ;
	}

	MutantStack(MutantStack const & src)
	{
		std::cout << "MutantStack Copy constructor called" << std::endl;
		*this = src;
		return ;
	}
	
	MutantStack & operator=(MutantStack const & rhs)
	{
		std::cout << "MutantStack Copy assignment operator called" << std::endl;
		if (this != &rhs)
		{
		
		}
		return (*this);
	}

	~MutantStack(void)
	{	
		std::cout << "MutantStack Destructor called" << std::endl;
		return ;
	}

	/*bool	empty(void) const
	{
		return (_stack.empty());
	}

	size_t	size(void) const
	{
		return (_stack.size());
	}

	T&		top(void)
	{
		return (_stack.top());
	}

	void	push(const T& val)
	{
		_stack.push(val);
	}

	void	pop(void)
	{
		_stack.pop();
	}

	void	swap(MutantStack& x)
	{
		_stack.swap(x._stack);
	}*/

	/*template<class... Args>
	void	emplace(Args&&... args)
	{
		this->_stack.emplace(std::forward<Args> (args)...);
	}*/

	typedef typename	std::stack<T>::container_type::iterator iterator;
	typedef typename	std::stack<T>::container_type::const_iterator const_iterator;


	iterator	begin(void)
	{
		return (this->c.begin());
	}

	iterator	end(void)
	{
		return (this->c.end());
	}

	const_iterator	begin(void) const
	{
		return (this->c.begin());
	}

	const_iterator	end(void) const
	{
		return (this->c.end());
	}

private:
	//std::stack<T>	_stack;
};

template<typename T>
std::ostream&   operator<<(std::ostream& o, MutantStack<T> const & a)
{
	(void)a;
	return (o);
}

#endif
