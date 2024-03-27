/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:34:08 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 12:19:22 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	//std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria("ice") {
	//std::cout << "Ice constructor by type called" << std::endl;
	(void)type;
}

Ice::Ice(const Ice& src) : AMateria(src) {
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice() {
	//std::cout << "Ice destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& rhs) {
	//std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Ice* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}