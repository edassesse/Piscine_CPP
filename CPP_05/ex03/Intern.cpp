/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:30:51 by edassess          #+#    #+#             */
/*   Updated: 2021/09/20 14:25:22 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
	return;
}

Intern::Intern(Intern const &rhs)
{
	*this = rhs;
	std::cout << "Intern copy constructor called" << std::endl;
	return;
}

Intern::~Intern(void)
{
	std::cout << "Intern Desctructor called" << std::endl;
	return;
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	std::string form[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	int i = 0;
	while (formName != form[i++] && i < 4)
		;
	switch (i)
	{
		case 1:
			std::cout << "Intern creates " << formName << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << formName << std::endl;
			return new PresidentialPardonForm(target);
		case 3:
			std::cout << "Intern creates " << formName << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			std::cout << "Can't create " << formName << std::endl;
	}
	return nullptr;
}
