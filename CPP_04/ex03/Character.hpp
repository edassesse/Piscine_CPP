/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:14:07 by edassess          #+#    #+#             */
/*   Updated: 2021/09/13 16:03:01 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

class Character
{
	private:
		std::string	_name;

	public:
		virtual ~Character(void);
		virtual std::string const &getName(void)const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, Character& target);
};

#endif
