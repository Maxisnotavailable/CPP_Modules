/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:19:10 by molla             #+#    #+#             */
/*   Updated: 2024/03/18 09:11:37 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

class Fixed {
	private:
		int					_fixedNb;
		static int const	_bits = 8;
	public:
		Fixed();								//constructeur par default
		Fixed(Fixed const & src);				//constructeur par copie
		Fixed(const int integer);	
		Fixed(const float floating);			
		~Fixed();								//destructeur
		Fixed&	operator=(Fixed const & rhs);	//operateur d'assignation
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream & o, Fixed const & rhs);

#endif