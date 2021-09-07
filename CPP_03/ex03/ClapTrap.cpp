/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:38:12 by edassess          #+#    #+#             */
/*   Updated: 2021/08/28 20:49:21 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy_point(10), _ad(10)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy_point = rhs._energy_point;
	this->_ad = rhs._ad;
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > amount)
	{
		this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage." << std::endl;
	}
	else
	{
		this->_hp = 0;
		std::cout << "ClapTrap " << this->_name << " is almost dead" << std::endl;
		this->beRepaired(10);
		std::cout << "Luckily he repared himself before it was too late 😌" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	std::cout << "ClapTrap " << this->_name << " got repaired for " << amount << " hp!" << std::endl;
}
