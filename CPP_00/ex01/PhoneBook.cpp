/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:11 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 15:36:43 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

Contact	PhoneBook::getContacts(int i) const {
	return this->_contacts[i];
}

static bool	isPhoneNumber(const std::string& str) {
	if (str.length() != 10)
		return false;
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]) || i > 9)
			return false;
	}
	return true;
}

static bool	isWhitespace(char c) {
	return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v';
}

static bool	isEmpty(const std::string& str) {
	for (size_t i = 0; i < str.length(); ++i) {
		if (!isWhitespace(str[i])) {
			return false;
		}
	}
	return true;
}

void	PhoneBook::setContacts(int i) {
	std::string input;
	std::string	datas[5] = {"firstName", "lastName", "nickName", "phoneNumber", "darkestSecret"};
	
	for (int j = 0; j < 5; j++) {
		std::cout << datas[j] << " : ";
		if (!std::getline(std::cin, input))
			exit(1);
		if (isEmpty(input)) {
			std::cout << "Enter data please." << std::endl;
			j--;
			continue;
		}
		if (j == 3 && !isPhoneNumber(input)) {
			std::cout << "Enter a valid phone number please." << std::endl;
			j--;
			continue;
		}
		this->_contacts[i].setData(input, datas[j]);
	}
}

void	PhoneBook::add() {
	static int	i = 0;
	
	if (i == 8)
		i = 0;
	setContacts(i);
	std::cout << "Contact created !" << std::endl;
	i++;
}

std::string	tronc(std::string data) {
	if (data.length() > 10) {
		data.insert(9, ".");
		data.resize(10);
	}
	return (data);
}

void	PhoneBook::search() {
	std::string	input;
	
	std::cout << "Index     |Firstname |Lastname  |Nickname  " << std::endl;
	for (int j = 1; j < 9 ; j++) {
		std::cout << "         " << j << "|";
		std::cout << std::setw(10) << std::right << tronc(getContacts(j - 1).getData("firstName")) << "|";
		std::cout << std::setw(10) << std::right << tronc(getContacts(j - 1).getData("lastName")) << "|";
		std::cout << std::setw(10) << std::right << tronc(getContacts(j - 1).getData("nickName"));
		std::cout << std::endl;
	}
	while (!std::cin.eof()) {
		std::cout << "Enter an index to see infos : ";
		if (!std::getline(std::cin, input))
			exit (1);
		else if (input.length() != 1 || input[0] < '1' || input[0] > '8') {
			std::cout << "Error: Invalid index !" << std::endl;
			continue;
		}
		else {
			int	index = atoi(input.c_str());
			std::cout << "Informations for contact at index " << index << ":" << std::endl;
			std::cout << "First name: " << getContacts(index - 1).getData("firstName") << std::endl;
			std::cout << "Last name: " << getContacts(index - 1).getData("lastName") << std::endl;
			std::cout << "Nick name: " << getContacts(index - 1).getData("nickName") << std::endl;
			std::cout << "Phone number: " << getContacts(index - 1).getData("phoneNumber") << std::endl;
			std::cout << "Dark secret: " << getContacts(index - 1).getData("darkSecret") << std::endl;
			break;
		}
	}
}