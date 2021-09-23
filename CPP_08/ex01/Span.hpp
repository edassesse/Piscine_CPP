/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:27:34 by user              #+#    #+#             */
/*   Updated: 2021/09/22 20:20:38 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);

		Span			&operator=(Span const &src);
		void			addNumber(int n);
		unsigned int	shortestSpan(void)const;
		unsigned int	longestSpan(void)const;

		class VectorFull: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Vector is full";
				}
		};

		class NoSpan: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "No span to be found";
				}
		};

	private:
		unsigned int		_n;
		std::vector<int>	*_vector;
};

#endif
