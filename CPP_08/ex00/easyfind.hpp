/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:07:58 by user              #+#    #+#             */
/*   Updated: 2021/09/22 19:21:11 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class ElementNotFound: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Element not found";
	}
};

template<typename T>
void	easyfind(T &t, int n)
{
	typename T::const_iterator iter;
	iter = std::find(t.begin(), t.end(), n);
	try
	{
		if (iter == t.end())
			throw (ElementNotFound());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	std::cout << "Element found: " << *iter << std::endl;
};

#endif
