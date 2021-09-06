/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:07:10 by edassess          #+#    #+#             */
/*   Updated: 2021/08/23 17:09:31 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void)const;
		void	set_name(std::string name);
		Zombie*	newZombie(std::string name);

		void	randomChump(std::string name);
		Zombie*	zombieHorde(int n, std::string name);

	private:
		std::string	_name;
};



#endif
