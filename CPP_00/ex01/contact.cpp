/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:23:04 by user              #+#    #+#             */
/*   Updated: 2021/09/08 10:14:30 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "annuaire.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	std::cout << "oue destruct" << std::endl;
	return;
}

void	memory_full(Contact *contacts)
{
	int			index;
	std::string	s_index;

	index = -1;
	std::cout << "Phonebook is full, which contact would you like to replace? (0 to cancel)" << std::endl;
	show_search(contacts, 8);
	while (index > 8 || index < 1)
	{
		std::getline(std::cin, s_index);
		if (s_index.find_first_not_of("0123456789") == std::string::npos)
		{
			index = std::stoi(s_index);
			if (index <= 8 && index >=1)
				break;
		}
		std::cout << "Wrong input, please try again" << std::endl;
	}
	if (index == 0)
	{
		std::cout << "No contact added nor replaced" << std::endl;
		return;
	}
	contacts[index - 1] = add_contact(contacts[index - 1]);
	return;
}

void	Contact::set_first_name(void)
{
	this->_first_name = "";
	while (this->_first_name.empty())
	{
		std::cout << "Please enter your first name: ";
		std::getline(std::cin, this->_first_name);
	}
	return;
}

void	Contact::set_last_name(void)
{
	this->_last_name = "";
	while (this->_last_name.empty())
	{
		std::cout << "Please enter your last name: ";
		std::getline(std::cin, this->_last_name);
	}
	return;
}

void	Contact::set_nickname(void)
{
	this->_nickname = "";
	while (this->_nickname.empty())
	{
		std::cout << "Please enter your nickname: ";
		std::getline(std::cin, this->_nickname);
	}
	return;
}

void	Contact::set_phone_number(void)
{
	this->_phone_number = "";
	while (this->_phone_number.empty())
	{
		std::cout << "Please enter your phone number: ";
		std::getline(std::cin, this->_phone_number);
		if (this->_phone_number.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Not a valid phone number" << std::endl;
			this->_phone_number = "";
		}
	}
	return;
}

void	Contact::set_darkest_secret(void)
{
	this->_darkest_secret = "";
	while (this->_darkest_secret.empty())
	{
		std::cout << "Please enter your darkest secret: ";
		std::getline(std::cin, this->_darkest_secret);
		std::cout << std::endl;
	}
	return;
}

std::string		Contact::get_first_name(void)const
{
	return this->_first_name;
}

std::string		Contact::get_last_name(void)const
{
	return this->_last_name;
}

std::string		Contact::get_nickname(void)const
{
	return this->_nickname;
}

std::string		Contact::get_phone_number(void)const
{
	return this->_phone_number;
}

std::string		Contact::get_darkest_secret(void)const
{
	return this->_darkest_secret;
}
