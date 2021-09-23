/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:39:10 by user              #+#    #+#             */
/*   Updated: 2021/09/15 20:59:24 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form("RobotomyRequestForm", 5, 25)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : _target(rhs._target), Form(rhs.getName(), rhs.getToSign(), rhs.getToExecute())
{
	*this = rhs;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

void	RobotomyRequestForm::action(void)const
{
	std::cout << "Oui" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->_target << " was robotomized!" << std::endl;
	else
		std::cout << "Failure" << std::endl;
}
