/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:30:38 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 14:40:52 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain& src);
	virtual ~Brain();
	Brain&	operator=(const Brain& rhs);
};

#endif