/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:48:49 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 14:53:04 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* _Brain;
	public:
		Cat();
		Cat(const Cat& src);
		virtual ~Cat();
		Cat&	operator=(const Cat& rhs);
		virtual void	makeSound() const;		
};

#endif