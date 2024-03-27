/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:13 by molla             #+#    #+#             */
/*   Updated: 2024/03/13 10:06:37 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string	Contact::getData(std::string data) const {
	if (data == "firstName")
		return this->_firstName;
	else if (data == "lastName")
		return this->_lastName;
	else if (data == "nickName")
		return this->_nickName;
	else if (data == "phoneNumber")
		return this->_phoneNumber;
	else
		return this->_darkestSecret;
}

void		Contact::setData(std::string input, std::string data) {
	if (data == "firstName")
		this->_firstName = input;
	else if (data == "lastName")
		this->_lastName = input;
	else if (data == "nickName")
		this->_nickName = input;
	else if (data == "phoneNumber")
		this->_phoneNumber = input;
	else if (data == "darkestSecret")
		this->_darkestSecret = input;
}