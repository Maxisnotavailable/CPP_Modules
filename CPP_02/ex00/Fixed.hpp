/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:05:52 by molla             #+#    #+#             */
/*   Updated: 2024/03/19 10:44:06 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Fixed {
	private:
		int					_fixedNb;
		static int const	_bits;				//
	public:
		Fixed();								//constructeur par default
		Fixed(const Fixed& src);				//constructeur par copie
		~Fixed();								//destructeur
		Fixed&	operator=(const Fixed& rhs);	//operateur d'assignation
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif