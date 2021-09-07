/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:01:05 by user              #+#    #+#             */
/*   Updated: 2021/09/01 10:21:22 by user             ###   ########lyon.fr   */
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
