/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:41:17 by molla             #+#    #+#             */
/*   Updated: 2024/03/10 15:20:39 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main() {
	{
		Weapon	weapon = Weapon("machine gun");
		HumanA	max("Max", weapon);
		max.attack();
		weapon.setType("knife");
		max.attack();
	}
	{
		Weapon	weapon = Weapon("machine gun");
		HumanB	jim("Jim");
		jim.attack();
		jim.setWeapon(weapon);
		jim.attack();
		weapon.setType("fork");
		jim.attack();
	}
	return 0;
}