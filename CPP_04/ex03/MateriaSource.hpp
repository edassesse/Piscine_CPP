/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:45:02 by edassess          #+#    #+#             */
/*   Updated: 2021/09/13 15:18:06 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	private:

};

#endif
