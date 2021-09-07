/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:49:49 by edassess          #+#    #+#             */
/*   Updated: 2021/09/07 15:41:25 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon Constructor for " << type << " called" << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Destructor for " << this->_type << " called" << std::endl;
	return;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType(void)const
{
	return this->_type;
}
