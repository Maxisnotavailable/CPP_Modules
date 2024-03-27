/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:25:42 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 10:33:37 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	ClapTrap	Bot1("CLAUDY");
	ClapTrap	Bot2("LOULOU");
	ScavTrap	ScavBot1("MAX");
	ScavTrap	ScavBot2(ScavBot1);
	FragTrap	FragBot1("SERENA");
	
	
	Bot1.setData(6, "damage");
	Bot1.attack(ScavBot2.getName());
	ScavBot2.takeDamage(6);
	ScavBot2.guardGate();
	ScavBot2.attack(Bot1.getName());
	Bot1.takeDamage(20);
	Bot1.beRepaired(15);
	Bot2.setData(8, "damage");
	for (int i = 0; i < 10; i++) {
		Bot2.attack(ScavBot1.getName());
		ScavBot1.takeDamage(8);
	}
	Bot2.beRepaired(10);
	ScavBot1.attack(Bot2.getName());
	Bot2.takeDamage(20);
	FragBot1.highFivesGuys();
	return 0;
}