/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:36:37 by user              #+#    #+#             */
/*   Updated: 2021/08/28 21:45:23 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "*t'es bourre*" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return this->_type;
}
