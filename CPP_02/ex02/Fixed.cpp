/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:19:39 by molla             #+#    #+#             */
/*   Updated: 2024/03/18 11:49:29 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNb() {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int integer) {
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedNb = integer * (1 << this->_bits);
}

Fixed::Fixed(const float floating) {
	//std::cout << "Float constructor called" << std::endl;
	this->_fixedNb = roundf(floating * (1 << this->_bits));
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed& rhs) const {
	return _fixedNb > rhs._fixedNb;
}

bool Fixed::operator<(const Fixed& rhs) const {
	return _fixedNb < rhs._fixedNb;
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return _fixedNb >= rhs._fixedNb;
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return _fixedNb <= rhs._fixedNb;
}

bool Fixed::operator==(const Fixed& rhs) const {
	return _fixedNb == rhs._fixedNb;
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return _fixedNb != rhs._fixedNb;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedNb = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const & rhs) {
	this->_fixedNb = (this->_fixedNb + rhs._fixedNb) >> this->_bits;
	return *this;
}

Fixed	Fixed::operator-(Fixed const & rhs) {
	this->_fixedNb = (this->_fixedNb - rhs._fixedNb) >> this->_bits;
	return *this;
}

Fixed	Fixed::operator*(Fixed const & rhs) {
	this->_fixedNb = (this->_fixedNb * rhs._fixedNb) >> this->_bits;
	return *this;
}

Fixed	Fixed::operator/(Fixed const & rhs) {
	this->_fixedNb = (this->_fixedNb / rhs._fixedNb) >> this->_bits;
	return *this;
}

Fixed&	Fixed::operator++() {
	this->_fixedNb += 1;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed&	Fixed::operator--() {
	this->_fixedNb -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return temp;
}

Fixed	Fixed::max(Fixed& nb1, Fixed& nb2) {
	if (nb1 > nb2)
		return nb1;
	else
		return nb2;
}

Fixed	Fixed::max(const Fixed& nb1, const Fixed& nb2) {
	if (nb1 > nb2)
		return nb1;
	else
		return nb2;
}

Fixed	Fixed::min(Fixed& nb1, Fixed& nb2) {
	if (nb1 < nb2)
		return nb1;
	else
		return nb2;
}

Fixed	Fixed::min(const Fixed& nb1, const Fixed& nb2) {
	if (nb1 < nb2)
		return nb1;
	else
		return nb2;
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