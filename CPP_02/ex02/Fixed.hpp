/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:19:10 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 15:16:51 by molla            ###   ########.fr       */
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
		Fixed(const Fixed& src);				//constructeur par copie
		Fixed(const int integer);	
		Fixed(const float floating);			
		~Fixed();								//destructeur

		bool operator>(const Fixed& rhs) const;
		bool operator<(const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;

		Fixed&	operator=(const Fixed& rhs);	//surcharge d'operateur d'assignation
		Fixed	operator+(const Fixed& rhs);
		Fixed	operator-(const Fixed& rhs);
		Fixed	operator*(const Fixed& rhs);
		Fixed	operator/(const Fixed& rhs);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed	min(Fixed& nb1, Fixed& nb2);
		static Fixed	min(const Fixed& nb1, const Fixed& nb2);
		static Fixed	max(Fixed& nb1, Fixed& nb2);
		static Fixed	max(const Fixed& nb1, const Fixed& nb2);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream & o, Fixed const & rhs);

#endif