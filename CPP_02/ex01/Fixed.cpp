/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:19:39 by molla             #+#    #+#             */
/*   Updated: 2024/03/18 09:14:46 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNb() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedNb = integer * (1 << this->_bits);
}

Fixed::Fixed(const float floating) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedNb = roundf(floating * (1 << this->_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedNb = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	return this->_fixedNb;
}
void	Fixed::setRawBits(int const raw) {
	this->_fixedNb = raw;
}

float	Fixed::toFloat(void) const {
	return (float)this->_fixedNb / (float)(1 << this->_bits);
}

int	Fixed::toInt(void) const {
	return (this->_fixedNb >> this->_bits);
}

std::ostream& operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

//static int const	_bits = 8;