/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:00:41 by user              #+#    #+#             */
/*   Updated: 2021/09/20 11:33:03 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal, protected Brain
{
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat		&operator=(Cat const &rhs);
		void	makeSound(void)const;

	private:
		std::string	_type;
		Brain		*_brain;
};

#endif
