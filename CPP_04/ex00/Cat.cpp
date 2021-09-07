/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:36:37 by user              #+#    #+#             */
/*   Updated: 2021/08/28 21:34:04 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
	return;
}

Cat::Cat(Cat const &rhs)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = rhs;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	return *this;
}

void	Cat::makeSound(void)const
{
	std::cout << "*cat noises*" << std::endl;
}
