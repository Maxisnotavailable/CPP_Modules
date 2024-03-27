/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:25:39 by molla             #+#    #+#             */
/*   Updated: 2024/03/09 15:42:44 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class	Zombie {
	
	private:
		std::string	_name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void);

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif