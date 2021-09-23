/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:43:36 by edassess          #+#    #+#             */
/*   Updated: 2021/09/23 18:51:35 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class mutantstack : public std::stack<T>
{
	public:
		mutantstack(void) {};
		~mutantstack(void) {};

				&operator[](unsigned int index);

	private:
		std::stack<T>	*stack;
		std::deque<T>	_deque;
};

#endif
