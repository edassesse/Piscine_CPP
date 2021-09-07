/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:09:57 by edassess          #+#    #+#             */
/*   Updated: 2021/09/07 15:46:46 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->innit();
	return;
}

Karen::~Karen(void)
{
	return;
}

void	Karen::innit(void)
{
	this->_fct[0] = &Karen::debug;
	this->_fct[1] = &Karen::info;
	this->_fct[2] = &Karen::warning;
	this->_fct[3] = &Karen::error;
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";

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
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::insignificant(void)
{
	std::cout << "Probably complaining about insignificant problems" << std::endl;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i <= 4 ; i++)
	{
		if (this->_level[i] == level)
		{
			(this->*_fct[i])();
			return;
		}
	}
	this->insignificant();
}

void	Karen::karenFilter(std::string level)
{
	int	i = 0;
	while (level != this->_level[i++] && i < 5)
		;
	switch(i)
	{
		case 1:
			(this->*_fct[0])();
		case 2:
			(this->*_fct[1])();
		case 3:
			(this->*_fct[2])();
		case 4:
			(this->*_fct[3])();
			break;
		default:
			this->insignificant();
			break;
	}
	return;
}
