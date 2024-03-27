/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:38:40 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 13:31:55 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& src);
		virtual ~Animal();
		Animal&	operator=(const Animal& rhs);
		std::string	getType() const;
		virtual void	makeSound() const;
		
};

#endif