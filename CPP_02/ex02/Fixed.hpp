/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:19:09 by edassess          #+#    #+#             */
/*   Updated: 2021/08/27 11:31:43 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const n);
		Fixed(float const f);
		~Fixed(void);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void)const;
		Fixed	&operator=(Fixed const &rhs);
		int		operator>(Fixed const &rhs)const;
		int		operator<(Fixed const &rhs)const;
		int		operator>=(Fixed const &rhs)const;
		int		operator<=(Fixed const &rhs)const;
		int		operator==(Fixed const &rhs)const;
		int		operator!=(Fixed const &rhs)const;
		float	operator+(Fixed const &rhs)const;
		float	operator-(Fixed const &rhs)const;
		float	operator*(Fixed const &rhs)const;
		float	operator/(Fixed const &rhs)const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		static int	max(Fixed &lhs, Fixed &rhs);
		static int	min(Fixed &lhs, Fixed &rhs);

	private:
		int			_value;
		int const	_bits;
};

		std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
