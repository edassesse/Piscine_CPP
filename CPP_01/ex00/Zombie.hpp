/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:07:10 by edassess          #+#    #+#             */
/*   Updated: 2021/08/23 15:14:32 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string namae);
		~Zombie(void);

		void	announce(void)const;
		Zombie*	newZombie(std::string name);

	private:
		std::string	_name;
};

		void	randomChump(std::string name);

#endif
