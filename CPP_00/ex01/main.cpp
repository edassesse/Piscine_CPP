/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:13:15 by user              #+#    #+#             */
/*   Updated: 2021/08/20 06:49:55 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string command;
	while (1)
	{
		std::cin >> command;
		if (command == "ADD")
			;
		else if (command == "SEARCH")
			;
		else if (command == "EXIT")
			break ;
	std::cout << "command == " << command << std::endl;
	}
	return (0);
}
