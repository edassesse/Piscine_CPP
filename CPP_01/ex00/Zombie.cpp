/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:09:54 by edassess          #+#    #+#             */
/*   Updated: 2021/08/28 15:46:55 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
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

void	Zombie::announce(void)const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*new_zombie = new Zombie(name);

	return (new_zombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie new_zombie(name);

	new_zombie.announce();
	return;
}
