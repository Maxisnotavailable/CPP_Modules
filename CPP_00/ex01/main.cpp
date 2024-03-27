/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:59:17 by molla             #+#    #+#             */
/*   Updated: 2024/03/13 10:49:41 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main() {
	PhoneBook	phonebook;
	std::string	input;
	
	while (true) {
		std::cout << "Enter an order (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, input))
			break;
		if (input == "EXIT")
			break;
		else if (input == "ADD") {
			phonebook.add();
		}
		else if (input == "SEARCH") {
			phonebook.search();
		}
	}
	return 0;
}