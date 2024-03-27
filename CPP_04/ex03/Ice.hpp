/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:34:30 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 10:29:55 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	private:
		std::string	_type;
	public:
		Ice();
		Ice(std::string const & type);
		Ice(const Ice& src);
		virtual ~Ice();
		Ice&	operator=(const Ice& rhs);
		
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif