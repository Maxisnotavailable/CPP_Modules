/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:49:14 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 14:52:57 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* _Brain;
	public:
		Dog();
		Dog(const Dog& src);
		virtual ~Dog();
		Dog&	operator=(const Dog& rhs);
		virtual void	makeSound() const;
};

#endif