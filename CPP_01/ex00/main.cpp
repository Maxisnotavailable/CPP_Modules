/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:25:28 by molla             #+#    #+#             */
/*   Updated: 2024/03/09 15:42:37 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main () {
	Zombie zombie1("Max");
	Zombie *zombie2 = newZombie("50 cent");
	zombie1.announce();
	zombie2->announce();
	randomChump("Trump");
	delete	zombie2;
	return 0;
}