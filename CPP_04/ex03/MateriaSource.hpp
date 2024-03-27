/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:58:17 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 11:44:46 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		virtual ~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& rhs);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(const std::string& type);
};
