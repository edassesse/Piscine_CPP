/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:36:37 by user              #+#    #+#             */
/*   Updated: 2021/08/28 21:33:56 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "Animal Default constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = rhs;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	return *this;
}

void	Animal::makeSound(void)const
{
	std::cout << "*animal noises*" << std::endl;
}

std::string	Animal::getType(void)const
{
	return this->_type;
}
