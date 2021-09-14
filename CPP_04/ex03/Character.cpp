/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:58:37 by edassess          #+#    #+#             */
/*   Updated: 2021/09/14 16:36:31 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default")
{
	std::cout << "Default Character Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = nullptr;
	return;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Constructor for " << name << " called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = nullptr;
	return;
}

Character::Character(Character &rhs)
{
	*this = rhs;
	return;
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete this->_inv[i];
	return;
}

std::string const	&Character::getName(void)const
{
	return this->_name;
}

void				Character::equip(AMateria *m)
{
	int	i;
	for (i = 0; this->_inv[i] && i < 4; i++)
		;
	if (!this->_inv[i])
		this->_inv[i] = m;
	return;
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx] = nullptr;
	return;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inv[idx] != nullptr)
	{
		std::cout << this->_name;
		this->_inv[idx]->use(target);
	}
	return;
}

Character			&Character::operator=(const Character &rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete this->_inv[i];
	for (int i = 0; i < 4; i++)
		if (rhs._inv[i])
			this->_inv[i] = rhs._inv[i]->clone();
	this->_name = rhs._name;
	return *this;
}
