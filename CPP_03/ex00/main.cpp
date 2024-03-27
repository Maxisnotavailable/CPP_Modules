/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:25:42 by molla             #+#    #+#             */
/*   Updated: 2024/03/19 18:11:38 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	Bot1;
	ClapTrap	Bot2("CLAUDY");
	ClapTrap	Bot3(Bot1);
	
	Bot2.setData(2, "damage");
	Bot2.attack(Bot1.getName());
	Bot1.takeDamage(2);
	Bot2.beRepaired(2);
	Bot1.beRepaired(1);
	Bot3.beRepaired(1);
	Bot3.setData(17, "damage");
	Bot3.attack("CLAUDY");
	Bot2.takeDamage(17);
	Bot2.beRepaired(2);
	return 0;
}