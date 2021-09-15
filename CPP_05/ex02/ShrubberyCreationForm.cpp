/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:39:10 by user              #+#    #+#             */
/*   Updated: 2021/09/15 20:57:59 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form("ShrubberyCreationForm", 5, 25)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : _target(rhs._target), Form(rhs.getName(), rhs.getToSign(), rhs.getToExecute())
{
	*this = rhs;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

void	ShrubberyCreationForm::action(void)const
{
	std::cout << "Creating " << this->_target << "_shrubbery..." << std::endl;
	std::ofstream ofs(this->_target + "_shrubbery");
	ofs << "..O..O..O..O..O..O..O\n..|..|..|..|..|..|..|";
	ofs.close();
}
