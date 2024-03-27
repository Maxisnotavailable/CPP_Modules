/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nCure.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:35:53 by molla             #+#    #+#             */
/*   Updated: 2024/03/25 13:40:04 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	private:
		std::string	_type;
	public:
		Cure();
		Cure(std::string const & type);
		Cure(const Cure& src);
		virtual ~Cure();
		Cure&	operator=(const Cure& rhs);
		
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif