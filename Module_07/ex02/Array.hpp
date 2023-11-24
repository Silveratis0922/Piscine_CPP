#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

template<typename T>

class	Array
{
	public:

		Array(void) : _size(0)
		{
			std::cout << "Array default constructor is called" << std::endl;
			return;
		}
	
		Array(unsigned int n) : _size(n)
		{
			std::cout << "Array parametric constructor is called" << std::endl;
			_tab = new T[_size];
			return ;
		}

		Array(Array const & copy) : _size(copy._size)
		{
			std::cout << "Array copy constructor called" << std::endl;
			_tab = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
			{
				_tab[i] = copy._tab[i];
			}
			return ;
		}

		Array&	operator=(Array const & egl)
		{
			std::cout << "Operator = is called" << std::endl;
			if (this != &egl)
			{
				delete [] _tab;
				this->_size = egl._size;
				_tab = new T[_size];

				for (unsigned int i = 0;i < _size; i++)
					_tab[i] = egl._tab[i];
			}
			return (*this);
		}
		
		class	OutOfRange : public std::exception
		{
			public:
				const char* what() const throw();
		};


		T&	operator[](unsigned int index)
		{
			if (index < _size)
				return (_tab[index]);
			else
				throw OutOfRange();
		}

		const T&	operator[](unsigned int index) const
		{
			if (index < _size)
				return (_tab[index]);
			else
				throw OutOfRange();
		}

		~Array(void)
		{
			std::cout << "Array destructor is called" << std::endl;
			delete [] _tab;
			return ;
		}

		void	fill(void)
		{
			for (unsigned int i = 0; i < _size; i++)
			{
				_tab[i] = i + 1;
			}
		}

		void	print(void)
		{
			for (unsigned int i = 0; i < _size; i++)
			{
				std::cout << "value tab[" << i << "] : " << _tab[i] << std::endl;
			}
			std::cout << std::endl;
		}

	private:
	
		T*				_tab;
		unsigned int	_size;
};

template<typename T>

const char*		Array<T>::OutOfRange::what() const throw()
{
	return ("Index is out of range");
}

#endif
