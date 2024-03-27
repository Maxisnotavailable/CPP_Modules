/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:37:55 by molla             #+#    #+#             */
/*   Updated: 2024/03/20 13:53:53 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* 	meta = new Animal();
	const Dog*		dog = new Dog();
	const Animal*	cat = new Cat();
	const WrongAnimal*	wrongcat = new WrongCat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	wrongcat->makeSound();
	
	delete meta;
	delete dog;
	delete cat;
	delete wrongcat;
	return 0;
}