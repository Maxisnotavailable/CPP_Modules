/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:31:04 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 12:04:58 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	//std::cout << "AMateria constructor by type called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria& src) {
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria() {
	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& rhs){
	//std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

const std::string& AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	std::cout << target.getName() << "use materia" << std::endl;
}