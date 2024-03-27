/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:14:13 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 12:54:43 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :	ClapTrap() {
	_name = "ScavBot";
	_health = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	_name = name;
	_health = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap constructor by name called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_health = rhs._health;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->getData("health") <= 0) {
		std::cout << "ScavTrap " << this->_name 
					<< " is dead..."  << std::endl;
		return;
	}
	if (this->getData("energy") <= 0) {
		std::cout << "ScavTrap " << this->_name 
					<< " has " << this->getData("energy") 
					<< " energy points to attack" << std::endl;
		return;
	}
	else {
		this->setData((this->getData("energy") - 1), "energy");
		std::cout << "ScavTrap " << this->_name 
					<< " attacks " << target 
					<< " causing " << this->_damage 
					<< " point of damage"  << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " : I'm a guard gate !"  << std::endl;
}
