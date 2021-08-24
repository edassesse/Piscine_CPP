/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:13:15 by user              #+#    #+#             */
/*   Updated: 2021/08/24 22:31:27 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include "annuaire.hpp"

int main(void)
{
	std::string	command;
	Contact		contacts[9];
	int			i;

	i = 0;
	std::cout << "'ADD' to add contact\t'SEARCH' to search contact\t 'EXIT' to exit your phone book" << std::endl;
	while (command != "EXIT")
	{
		std::cin >> command;
		if (command == "ADD")
		{
			if (i != 8)
			{
			contacts[i] = add_contact(contacts[i]);
			i++;
			}
			else
				memory_full(contacts);
			continue;
		}
		else if (command == "SEARCH")
			search(contacts, i);
		else if (command != "EXIT")
			std::cout << "Invalid command, try again" << std::endl;
	}
	return 0;
}
