/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:39:35 by user              #+#    #+#             */
/*   Updated: 2021/09/16 00:40:17 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	try
	{
		PresidentialPardonForm form1 = PresidentialPardonForm("Grigor");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		RobotomyRequestForm form1 = RobotomyRequestForm("Grigor");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 10);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		ShrubberyCreationForm form1 = ShrubberyCreationForm("Grigor");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 10);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	return (0);
	/*
	   Bureaucrat *boss;
	   Bureaucrat *bob;
	   Bureaucrat *sylvie;
	   PresidentialPardonForm *PPF = new PresidentialPardonForm("sofia");
	   RobotomyRequestForm *RRF = new RobotomyRequestForm("john");
	   ShrubberyCreationForm *SCF = new ShrubberyCreationForm("mike");

	   try
	   {
	   boss = new Bureaucrat("Boss", 1);
	   }
	   catch(const std::exception& e)
	   {
	   std::cerr << e.what() << '\n';

	   return (0);
	   }

	   std::cout << *boss;

	   try
	   {
	   bob = new Bureaucrat("Bob", 30);
	   }
	   catch(const std::exception& e)
	   {
	   std::cerr << e.what() << '\n';
	   delete boss;

	   return (0);
	   }

	   std::cout << *bob;

	   try
	   {
	   sylvie = new Bureaucrat("Sylvie", 3);
	   }
	   catch(const std::exception& e)
	   {
	   std::cerr << e.what() << '\n';
	   delete bob;
	   delete boss;

	   return (0);
	   }
	   std::cout << sylvie;

	   std::cout << "-------------------------" << std::endl;
	// sign ok, execute ko
	boss->signForm(PPF);
	bob->executeForm(PPF);
	std::cout << "-------------------------" << std::endl;
	// sign ok, execute ok,
	boss->signForm(RRF);
	sylvie->executeForm(RRF);
	std::cout << "-------------------------" << std::endl;
	// sign ok execute ok sign ko
	boss->signForm(SCF);
	sylvie->executeForm(SCF);
	boss->signForm(SCF);
	// std::cout << "-------------------------" << std::endl;
	// // execute ko
	// sylvie->executeForm(*SCF);

	delete bob;
	delete boss;
	delete sylvie;
	delete PPF;
	delete RRF;
	delete SCF;
	*/
}
