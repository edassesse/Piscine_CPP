/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:20:00 by user              #+#    #+#             */
/*   Updated: 2021/09/16 00:41:18 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int const toSign, int const toExecute) : _name(name), _toSign(toSign), _toExecute(toExecute), _signed(0)
{
	if (toSign > 150 || toExecute > 150)
		throw Form::GradeTooLowException();
	else if (toSign < 1 || toExecute < 1)
		throw Form::GradeTooHighException();
	return;
}

Form::Form(Form const &rhs) : _name(rhs._name), _toSign(rhs._toSign), _toExecute(rhs._toExecute)
{
	*this = rhs;
	return;
}

Form::~Form(void)
{
	return;
}

const char	*Form::AlreadySignedException::what() const throw()
{
	return "Form is already signed";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade too low";
}

std::string		Form::getName(void)const
{
	return this->_name;
}

bool				Form::getSigned(void)const
{
	return this->_signed;
}

int				Form::getToSign(void)const
{
	return this->_toSign;
}

int				Form::getToExecute(void)const
{
	return this->_toExecute;
}

void			Form::beSigned(Bureaucrat const &src)
{
	if (!this->getSigned())
	{
		if (src.getGrade() > this->getToSign())
			throw Form::GradeTooLowException();
		else
			this->_signed = 1;
	}
	else
		throw Form::AlreadySignedException();
	return;
}

Form		&Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return *this;
}

void		Form::execute(Bureaucrat const &executor)const
{
	if (executor.getGrade() > this->_toExecute)
		throw Form::GradeTooLowException();
	else
		this->action();
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << "Form's name: " << src.getName() << ". Signed: " << (src.getSigned() ? "yes." : "no.") << " Grade to sign: " << src.getToSign() << ". Grade to execute: " << src.getToExecute() << std::endl;
	return o;
}
