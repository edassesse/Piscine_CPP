/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:38:20 by edassess          #+#    #+#             */
/*   Updated: 2021/08/28 19:45:48 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amout);
		void		beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hp;
		int			_energy_point;
		int			_ad;
};

#endif
