/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:19:54 by user              #+#    #+#             */
/*   Updated: 2021/09/15 16:48:33 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;

	public:
		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(Bureaucrat const &rhs);
		~Bureaucrat(void);

		class GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();
		};
		Bureaucrat &operator=(Bureaucrat const &rhs);
		std::string getName(void)const;
		int			getGrade(void)const;
		void		incrementGrade(void);
		void		decrementGrade(void);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif
