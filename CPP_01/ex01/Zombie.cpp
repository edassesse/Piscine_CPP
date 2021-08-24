/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:09:54 by edassess          #+#    #+#             */
/*   Updated: 2021/08/23 17:10:48 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destroyed" << std::endl;
	return;
}

void	Zombie::announce(void)const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*new_zombie = new Zombie();

	this->_name = name;
	return (new_zombie);
}

void	randomChump(std::string name)
{
	Zombie	*random_zombie = new Zombie();

	random_zombie->set_name(name);
	random_zombie->announce();
	delete random_zombie;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return;
}
