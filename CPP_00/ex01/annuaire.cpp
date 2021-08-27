/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:40:06 by user              #+#    #+#             */
/*   Updated: 2021/08/27 10:44:23 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"
#include <string>
#include <cstdlib>

Contact	add_contact(Contact contact)
{
	contact.set_first_name();
	contact.set_last_name();
	contact.set_nickname();
	contact.set_phone_number();
	contact.set_darkest_secret();
	std::cout << "Contact " << contact.get_first_name() << " has been created" << std::endl;
	return (contact);
}

void	show_search(Contact *contacts, int n)
{
	int	size;
	std::string	fill = "          ";

	for (int i = 0; i < n; i++)
	{
		std::cout << "| " << i + 1 << " |";
		size = contacts[i].get_first_name().size();
		if (size > 10)
			std::cout << contacts[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << fill.substr(0, 10 - size) << contacts[i].get_first_name() << "|";
		size = contacts[i].get_last_name().size();
		if (size > 10)
			std::cout << contacts[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << fill.substr(0, 10 - size) << contacts[i].get_last_name() << "|";
		size = contacts[i].get_nickname().size();
		if (size > 10)
			std::cout << contacts[i].get_nickname().substr(0, 9) << ".|";
		else
			std::cout << fill.substr(0, 10 - size) << contacts[i].get_nickname() << "|";
		std::cout << std::endl;
	}
}

void	Contact::show(void)const
{
	std::cout << "First Name: " << this->get_first_name() << std::endl;
	std::cout << "Last Name: " << this->get_last_name() << std::endl;
	std::cout << "Nickname: " << this->get_nickname() << std::endl;
	std::cout << "Phone Number: " << this->get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " <<this->get_darkest_secret() << std::endl;
	return;
}

void	search(Contact *contacts, int n)
{
	int	index;
	std::string	s_index;

	index = -1;
	if (n == 0)
	{
		std::cout << "Your phonebook is empty, add a contact by using the ADD command" << std::endl;
		return;
	}
	show_search(contacts, n);
	std::cout << "Which contact would you like to see?" << std::endl;
	while (index > n || index < 1)
	{
		std::getline(std::cin, s_index);
		if (s_index.find_first_not_of("0123456789") == std::string::npos)
			index = std::stoi(s_index);
		if (index > n || index < 1)
			std::cout << "Enter a valid contact index" << std::endl;
	}
	contacts[index - 1].show();
	return;
}
