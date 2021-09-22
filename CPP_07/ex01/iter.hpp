/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:05:57 by user              #+#    #+#             */
/*   Updated: 2021/09/22 17:26:36 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

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

#endif
