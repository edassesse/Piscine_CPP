/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:02:46 by edassess          #+#    #+#             */
/*   Updated: 2021/09/17 13:38:08 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hp = 100;
	this->_energy_point = 100;
	this->_ad = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy_point = 100;
	this->_ad = 30;
	std::cout << "FragTrap constructor for " << name << " called" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy_point = rhs._energy_point;
	this->_ad = rhs._ad;
	return *this;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " highfives you" << std::endl;
}
