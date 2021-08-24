/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:23:04 by user              #+#    #+#             */
/*   Updated: 2021/08/24 22:31:25 by user             ###   ########lyon.fr   */
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
	return;
}

void	memory_full(Contact *contacts)
{
	int	index;

	std::cout << "Phonebook is full, which contact would you like to replace? (0 to cancel)" << std::endl;
	std::cin >> index;
	if (index > 8 || index < 0)
		while (index > 8 || index < 0)
		{
			std::cout << "Wrong input, please try again" << std::endl;
			std::cin >> index;
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
	std::cout << "Please enter your first name: ";
	std::cin >> this->_first_name;
	while (this->_first_name.empty())
	{
		std::cout << "Please enter your first name: ";
		std::cin >> this->_first_name;
		for (int i = 0; this->_first_name[i]; i++)
		{
			if (!isalpha(this->_first_name[i]) && !strchr(" -", this->_first_name[i]))
			{
				this->_first_name = "";
				break;
			}
		}
	}
	return;
}

void	Contact::set_last_name(void)
{
	std::cout << "Please enter your last name: ";
	std::cin >> this->_last_name;
	while (this->_last_name.empty())
	{
		std::cout << "Please enter your last name: ";
		std::cin >> this->_last_name;
		for (int i = 0; this->_last_name[i]; i++)
		{
			if (!isalpha(this->_last_name[i]) && !strchr(" -", this->_last_name[i]))
			{
				this->_last_name = "";
				break;
			}
		}
	}
	return;
}

void	Contact::set_nickname(void)
{
	std::cout << "Please enter your nickname: ";
	std::cin >> this->_nickname;
	while (this->_nickname.empty())
	{
		std::cout << "Please enter your nickname: ";
		std::cin >> this->_nickname;
	}
	return;
}

void	Contact::set_phone_number(void)
{
	std::cout << "Please enter your phone number: ";
	std::cin >> this->_phone_number;
	while (this->_phone_number.empty())
	{
		std::cout << "Please enter your phone number: ";
		std::cin >> this->_phone_number;
		if (!this->_phone_number.find_first_not_of("0123456789"))
			this->_phone_number = "";
	}
	return;
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "Please enter your darkest secret: ";
	std::cin >> this->_darkest_secret;
	while (this->_darkest_secret.empty())
	{
		std::cout << "Please enter your darkest secret: ";
		std::cin >> this->_darkest_secret;
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
