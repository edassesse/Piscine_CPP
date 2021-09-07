/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:36:37 by user              #+#    #+#             */
/*   Updated: 2021/08/28 20:52:16 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_hp = FragTrap::_hp;
	this->_energy_point = ScavTrap::_energy_point;
	this->_ad = FragTrap::_ad;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy_point = rhs._energy_point;
	this->_ad = rhs._ad;
	return *this;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and ClapTraps name is " << ClapTrap::_name;
}
