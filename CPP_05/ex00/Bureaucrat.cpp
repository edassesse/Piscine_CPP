/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:20:00 by user              #+#    #+#             */
/*   Updated: 2021/09/15 16:46:05 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int const grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	*this = rhs;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::string		Bureaucrat::getName(void)const
{
	return this->_name;
}

int				Bureaucrat::getGrade(void)const
{
	return this->_grade;
}

void			Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void			Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << "bureaucrat grad: " << src.getGrade() << "." << std::endl;
	return o;
}
