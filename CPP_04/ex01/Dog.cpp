/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:36:56 by edassess          #+#    #+#             */
/*   Updated: 2021/09/20 11:45:31 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
	return;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = rhs._brain;
	*this = rhs;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	this->_brain = rhs._brain;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << "*dog noises*" << std::endl;
}
