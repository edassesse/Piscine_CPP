/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:39:10 by user              #+#    #+#             */
/*   Updated: 2021/09/15 20:59:59 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), Form("PresidentialPardonForm", 5, 25)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : _target(rhs._target), Form(rhs.getName(), rhs.getToSign(), rhs.getToExecute())
{
	*this = rhs;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

void	PresidentialPardonForm::action(void)const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return;
}
