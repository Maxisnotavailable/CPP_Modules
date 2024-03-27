/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:37:55 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 15:04:39 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* 	tab[10];
	for (int i = 0; i < 5; i++)
		tab[i] = new Dog;
	for (int i = 5; i < 10; i++)
		tab[i] = new Cat;
	for (int i = 0; i < 10; i++)
		delete tab[i];
	return 0;
}