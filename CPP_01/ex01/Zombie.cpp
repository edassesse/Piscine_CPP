/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:09:54 by edassess          #+#    #+#             */
/*   Updated: 2021/09/06 19:28:51 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Default")
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor for " << name << " called" << std::endl;
	this->_name = name;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " Deleted" << std::endl;
	return;
}

void		Zombie::announce(void)const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}
std::string	Zombie::getName(void)const
{
	return this->_name;
}
