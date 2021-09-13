/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:58:19 by edassess          #+#    #+#             */
/*   Updated: 2021/09/13 15:17:59 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default")
{
	std::cout << "AMateria Constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Type AMateria Constructor for " << type << " called" << std::endl;
	return;
}

AMateria::AMateria(AMateria const &rhs)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = rhs;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType(void)const
{
	return this->_type;
}

void			AMateria::use(ICharacter &target)
{
	"* shoots an ice bolt at NAME *
		* heals NAME’s wounds *
	std::cout << "Uses " << this->_type << " on " << target->_getName << std::endl;
}
