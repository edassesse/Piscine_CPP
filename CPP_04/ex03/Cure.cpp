/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:24:04 by user              #+#    #+#             */
/*   Updated: 2021/09/14 14:56:47 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(std::string const &type)
{
	this->_type = type;
	std::cout << "Cure Constructor for " << type << " called" << std::endl;
	return;
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called" << std::endl;
	return;
}

AMateria	*Cure::clone(void)const
{
	AMateria *clone = new Cure(this->_type);
	return clone;
}

Cure		&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	return *this;
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	return;
}
