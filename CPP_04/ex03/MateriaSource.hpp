/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:45:02 by edassess          #+#    #+#             */
/*   Updated: 2021/09/14 14:48:45 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_source[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &rhs);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &rhs);
		void			learnMateria(AMateria *src);
		AMateria		*createMateria(std::string const & type);
};

#endif
