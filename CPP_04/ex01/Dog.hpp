/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:01:05 by user              #+#    #+#             */
/*   Updated: 2021/09/20 11:32:59 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal, protected Brain
{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog		&operator=(Dog const &rhs);
		void	makeSound(void)const;

	private:
		std::string	_type;
		Brain		*_brain;
};

#endif
