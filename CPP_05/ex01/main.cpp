/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:39:35 by user              #+#    #+#             */
/*   Updated: 2021/09/15 18:55:07 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Form form1("form1", 20, 30);
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 10);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;
	
	try
	{
		Form form1("form1", 20, 30);
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 21);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		Form form1("form1", 20, 30);
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 10);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		std::cout << form1 << std::endl;
		Bob.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;
	
	return (0);
}
