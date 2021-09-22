/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:28:32 by user              #+#    #+#             */
/*   Updated: 2021/09/22 18:36:46 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int>		nullarray;
	Array<int>		intarray(5);
	Array<char>		chararray(5);
	Array<char>		cpychararray;

	std::cout << "array of int :" << std::endl;
	for(size_t i = 0; i < intarray.size(); i++)
		intarray[i] = 5;
	for(size_t i = 0; i < intarray.size(); i++)
		std::cout << intarray[i] << std::endl;

	std::cout << "--" << std::endl;

	std::cout << "array of char :" << std::endl;
	for(size_t i = 0; i < chararray.size(); i++)
		chararray[i] = 's';
	for(size_t i = 0; i < chararray.size(); i++)
		std::cout << chararray[i] << std::endl;

	std::cout << "--" << std::endl;

	cpychararray = chararray;
	std::cout << "copy array of char :" << std::endl;
	for(size_t i = 0; i < cpychararray.size(); i++)
		std::cout << cpychararray[i] << std::endl;

	std::cout << "--" << std::endl;

	try
	{
		std::cout << intarray[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
