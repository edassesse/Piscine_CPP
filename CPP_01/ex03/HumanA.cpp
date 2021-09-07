/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:50:00 by edassess          #+#    #+#             */
/*   Updated: 2021/09/07 15:40:06 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weapon(type), _name(name)
{
	std::cout << "HumanA Constructor for " << name << " called" << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA Destructor for " << this->_name << " called" << std::endl;
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
