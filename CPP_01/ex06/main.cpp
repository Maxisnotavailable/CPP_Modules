/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:03:16 by molla             #+#    #+#             */
/*   Updated: 2024/03/11 10:01:08 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: usage: ./harlfilter <level>" << std::endl;
		return 1;
	}
	else {
		Harl	harl;
		std::string 	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (int i = 0; i < 4; i++) {
			if (argv[1] == levels[i]) {
				while (i < 4) {
					harl.complain(levels[i++]);
				}
				return 0;
			}
		}
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
