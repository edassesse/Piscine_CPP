/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:50:25 by user              #+#    #+#             */
/*   Updated: 2021/09/15 18:55:55 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_toSign;
		int const			_toExecute;

	public:
		Form(std::string const &name, int const toSign, int const toExecute);
		Form(Form const &rhs);
		~Form(void);

		std::string		getName(void)const;
		bool			getSigned(void)const;
		int				getToSign(void)const;
		int				getToExecute(void)const;

		void			beSigned(Bureaucrat const &src);

		Form			&operator=(Form const &rhs);

		class AlreadySignedException: public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream			&operator<<(std::ostream &o, Form const &src);

#endif
