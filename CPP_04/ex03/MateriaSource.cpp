/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:57:41 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 12:08:13 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	//std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	//std::cout << "MateriaSource constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource() {
	//std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs) {
	//std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (this->_materias[i] != NULL) {
				delete this->_materias[i];
				this->_materias[i] = NULL;
			}
			this->_materias[i] = rhs._materias[i]->clone(); 
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (m->getType() == "ice" || m->getType() == "cure") {
		for (int i = 0; i < 4; i++) {
			if (this->_materias[i] == NULL) {
				this->_materias[i]= m;
				return ;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] && this->_materias[i]->getType() == type) 
			return this->_materias[i]->clone();
	}
	return (NULL);
}