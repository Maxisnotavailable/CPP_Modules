/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:26:38 by molla             #+#    #+#             */
/*   Updated: 2024/03/19 18:07:48 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	_name("Bot"),
						_health(10),
						_energy(10),
						_damage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :	_name(name),
										_health(10),
										_energy(10),
										_damage(0) {
	std::cout << "Constructor by name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
	}
	return *this;
}

std::string	ClapTrap::getName() {
	return this->_name;
}

int		ClapTrap::getData(std::string data) const {
	if (data == "health")
		return this->_health;
	else if (data == "energy")
		return this->_energy;
	else if (data == "damage")
		return this->_damage;
	else {
		std::cout << "Error in getData arument" << std::endl;
		return 1; 
	}
}

void	ClapTrap::setData(int value, std::string data) {
	if (data == "health")
		this->_health = value;
	else if (data == "energy")
		this->_energy = value;
	else if (data == "damage")
		this->_damage = value;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->getData("health") <= 0) {
		std::cout << "ClapTrap " << this->_name 
					<< " is dead..."  << std::endl;
		return;
	}
	if (this->getData("energy") <= 0) {
		std::cout << "ClapTrap " << this->_name 
					<< " has " << this->getData("energy") 
					<< " energy points to attack" << std::endl;
		return;
	}
	else {
		this->setData((this->getData("energy") - 1), "energy");
		std::cout << "ClapTrap " << this->_name 
					<< " attacks " << target 
					<< " causing " << this->_damage 
					<< " point of damage"  << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->getData("health") <= 0) {
		std::cout << "ClapTrap " << this->_name 
					<< " is dead..."  << std::endl;
		return;
	}
	else {
		this->setData((this->getData("health") - amount), "health");
		std::cout << "ClapTrap " << this->_name 
					<< " take " << amount 
					<< " damage" << std::endl;
	}
	if (this->getData("health") <= 0) {
		std::cout << "ClapTrap " << this->_name 
					<< " is dead..."  << std::endl;
		this->setData(0, "health");
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->getData("health") <= 0) {
		std::cout << "ClapTrap " << this->_name 
					<< " is dead and can't be repaired"  << std::endl;
		return;
	}
	if (this->getData("energy") <= 0) {
		std::cout << "ClapTrap " << this->_name 
					<< " has " << this->getData("energy") 
					<< " energy points to be repaired" << std::endl;
		return;
	}
	this->setData((this->getData("energy") - 1), "energy");
	this->setData((this->getData("health") + amount), "health");
	std::cout << "ClapTrap " << this->_name 
					<< " get " << amount 
					<< " health points" << std::endl;
}