/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:28:37 by user              #+#    #+#             */
/*   Updated: 2021/09/23 15:04:43 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array<T>(void) : _n(0), _array(NULL) 
		{
			return;
		};

		Array<T>(unsigned int n) : _n(n), _array(new T[n]())
		{
			return;
		};

		~Array(void)
		{
			if(this->_n)
				delete [] this->_array;
		};

		Array(Array<T>const &rhs) : _n(rhs._n)
		{
			*this = rhs;
			return;
		};


		Array<T>		&operator=(Array<T> const &rhs)
		{
			this->_array = NULL;
			if (rhs._n > 0)
			{
				this->_array = new T[rhs._n]();
				for (unsigned int i = 0; i < rhs._n; i++)
				{
					this->_array[i] = rhs._array[i];
				}
			}
			this->_n = rhs._n;
			return *this;
		};

		T			&operator[](unsigned int index)
		{
			if (index >= this->_n)
				throw Array<T>::OutOfLimitsException();
			return this->_array[index];
		};

		unsigned int	size(void)const
		{
			return this->_n;
		};

		class OutOfLimitsException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of limits";
		}
	};

	private:
		unsigned int	_n;
		T				*_array;
};

#endif
