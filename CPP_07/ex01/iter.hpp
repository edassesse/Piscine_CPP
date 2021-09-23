/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:05:57 by user              #+#    #+#             */
/*   Updated: 2021/09/23 14:21:59 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP


template<typename T>
void	iter(T *array, int size, void (*fct)(T &tab))
{
	for (int i = 0; i < size; i++)
		fct(array[i]);
	return;
}

template<typename T>
void	display(T x)
{
	std::cout << x << std::endl;
}


class Awesome {

public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }

private:
int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; };


#endif
