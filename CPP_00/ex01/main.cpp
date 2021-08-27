/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:37:53 by edassess          #+#    #+#             */
/*   Updated: 2021/08/27 10:43:20 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"
#include "annuaire.hpp"

int main(int ac, char **av)
{
	std::string	command;
	Contact		contacts[9];
	int			i;

	(void)av;
	i = 0;
	if (ac > 1)
	{
		std::cout << "Too many arguments" << std::endl;
		return 0;
	}
	while (command != "EXIT")
	{
		std::cout << "'ADD' to add contact\t'SEARCH' to search contact\t 'EXIT' to exit your phone book" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (i < 8)
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
