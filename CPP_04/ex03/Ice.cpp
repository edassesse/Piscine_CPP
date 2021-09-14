/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:37:32 by edassess          #+#    #+#             */
/*   Updated: 2021/09/14 16:37:33 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(std::string const &type)
{
	this->_type = type;
	std::cout << "Ice Constructor for " << type << " called" << std::endl;
	return;
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
	return;
}

AMateria	*Ice::clone(void)const
{
	AMateria *clone = new Ice(this->_type);
	return clone;
}

Ice		&Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;
	return *this;
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
	return;
}
