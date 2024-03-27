/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:42:04 by molla             #+#    #+#             */
/*   Updated: 2024/03/09 17:10:19 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main () {
	int		size = 5;
	Zombie	*horde;
	
	horde = zombieHorde(size, "Max");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}