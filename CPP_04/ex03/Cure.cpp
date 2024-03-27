/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nCure.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:35:56 by molla             #+#    #+#             */
/*   Updated: 2024/03/25 13:57:19 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	//std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria ("cure") {
	//std::cout << "Cure constructor by type called" << std::endl;
	(void)type;
}

Cure::Cure(const Cure& src) : AMateria(src){
	//std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure() {
	//std::cout << "Cure destructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& rhs) {
	//std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Cure* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
}