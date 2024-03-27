/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:43:04 by molla             #+#    #+#             */
/*   Updated: 2024/03/10 12:46:28 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType();
		void			setType(std::string type);
};

#endif