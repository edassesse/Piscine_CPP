/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:28:32 by user              #+#    #+#             */
/*   Updated: 2021/09/23 15:07:37 by edassess         ###   ########lyon.fr   */
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
/*
#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}*/
