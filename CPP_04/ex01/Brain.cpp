/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:10:39 by user              #+#    #+#             */
/*   Updated: 2021/09/20 11:34:28 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
	for(int i = 0; i < 99 ;i++)
		this->_ideas[i] = "\0";
	return;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for(int i = 0; i < 99; i++)
		this->_ideas[i] = "\0";
	*this = rhs;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return;
}
