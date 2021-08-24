/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:08:03 by edassess          #+#    #+#             */
/*   Updated: 2021/08/24 16:48:38 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class	Karen
{
	public:
		Karen(void);
		~Karen(void);

		void	complain(std::string level);
		void	karenFilter(int level);
		void	innit(void);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	insignificant(void);

		std::string	_level[4];
		void		(Karen::*_fct[4])(void);
};

#endif
