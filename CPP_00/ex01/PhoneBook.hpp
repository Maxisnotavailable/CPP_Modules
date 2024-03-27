/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:20 by molla             #+#    #+#             */
/*   Updated: 2024/03/14 13:44:34 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
	
	Contact getContacts(int i) const;
	void	setContacts(int i) ;
	void	add(void);
	void	search(void);
};

#endif