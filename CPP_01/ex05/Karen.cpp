/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:09:57 by edassess          #+#    #+#             */
/*   Updated: 2021/09/07 15:46:02 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->fct[0] = &Karen::debug;
	this->fct[1] = &Karen::info;
	this->fct[2] = &Karen::warning;
	this->fct[3] = &Karen::error;
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	std::cout << "Karen Constructor called" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Karen Destructor called" << std::endl;
	return;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i <= 4 ; i++)
	{
		if (this->_level[i] == level)
		{
			(this->*fct[i])();
			return;
		}
	}
	std::cout << "Probably complaining about insignificant problems" << std::endl;
}
