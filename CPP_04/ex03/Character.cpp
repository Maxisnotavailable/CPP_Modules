/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:43:43 by molla             #+#    #+#             */
/*   Updated: 2024/03/26 12:04:16 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	//std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) {
	//std::cout << "Character constructor by name called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& src) {
	//std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character() {
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character&	Character::operator=(const Character& rhs) {
	//std::cout << "Character assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL) {
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			this->_inventory[i] = rhs._inventory[i]->clone(); 
		}
	}
	return *this;
}

const std::string& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (m->getType() == "ice" || m->getType() == "cure") {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] == NULL) {
				this->_inventory[i]= m;
				return ;
			}
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3) {
		if (this->_inventory[idx]->getType() == "ice" || this->_inventory[idx]->getType() == "cure") {
			this->_inventory[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3) {
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
	}
}
