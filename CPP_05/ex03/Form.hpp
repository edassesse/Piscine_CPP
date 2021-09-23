/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:50:25 by user              #+#    #+#             */
/*   Updated: 2021/09/20 14:14:29 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		std::string const	_name;
		bool				_signed;
		int const			_toSign;
		int const			_toExecute;

	public:
		Form(std::string const &name, int const toSign, int const toExecute);
		Form(Form const &rhs);
		virtual ~Form(void);

		std::string		getName(void)const;
		bool			getSigned(void)const;
		int				getToSign(void)const;
		int				getToExecute(void)const;

		void			beSigned(Bureaucrat const &src);

		Form			&operator=(Form const &rhs);

		void			execute(Bureaucrat const &executor)const;
		virtual void	action(void)const = 0;

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
