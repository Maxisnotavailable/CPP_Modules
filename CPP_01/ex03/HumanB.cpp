/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:43:09 by molla             #+#    #+#             */
/*   Updated: 2024/03/10 15:20:28 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon& weapon) {
	if (this->_weapon != NULL)
		delete this->_weapon;
	this->_weapon = &weapon;
}

void	HumanB::attack() const {
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with their fucking hands !" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}