/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:02:46 by edassess          #+#    #+#             */
/*   Updated: 2021/08/28 20:28:33 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy_point = 50;
	this->_ad = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy_point = rhs._energy_point;
	this->_ad = rhs._ad;
	return *this;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << std::endl;
}

	void	ScavTrap::guardGate(void)
	{
		std::cout << "ScavTrap " << this->_name << " has entered gatekeeper mode" << std::endl;
	}
