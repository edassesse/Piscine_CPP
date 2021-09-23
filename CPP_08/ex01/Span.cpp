/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:27:21 by user              #+#    #+#             */
/*   Updated: 2021/09/22 20:20:11 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _vector(new std::vector<int>[n]())
{
	return;
}

Span::Span(Span const &src) : _n(0), _vector(NULL)
{
	*this = src;
}

Span::~Span(void)
{
	delete [] this->_vector;
}

Span			&Span::operator=(Span const &src)
{
	this->_n = src._n;
	this->_vector = new std::vector<int>[src._vector->size()];
	//	std::copy(src._vector->begin(), src._vector->end(), std::back_inserter(this->_vector));
	std::vector<int> *newVector = new std::vector<int>[src._vector->size()];
	std::copy(src._vector->begin(), src._vector->end(), std::back_inserter(*newVector));
	this->_vector = newVector;
	return *this;
}

void			Span::addNumber(int n)
{
	if (!this->_n)
		throw VectorFull();
	this->_vector->push_back(n);
	this->_n--;
}

unsigned int	Span::shortestSpan(void)const
{
	if (this->_vector->size() <= 1)
		throw NoSpan();
	std::vector<int> newVector(this->_vector->size(), 0);
	std::adjacent_difference(this->_vector->begin(), this->_vector->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::min_element(newVector.begin() + 1, newVector.end()));
}

unsigned int	Span::longestSpan(void)const
{
	if (this->_vector->size() <= 1)
		throw NoSpan();
	return (*std::max_element(this->_vector->begin(), this->_vector->end()) - *std::min_element(this->_vector->begin(), this->_vector->end()));
}
