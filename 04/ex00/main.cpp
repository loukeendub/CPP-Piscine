/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:14:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/08 04:22:38 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal*	wrongmeta = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrongmeta->makeSound();
	k->makeSound();
	
		delete meta;
	delete i;
	delete j;
	
	std::cout << std::endl << k->getType() << " " << std::endl;
	wrongmeta->makeSound();
	k->makeSound();
	delete wrongmeta;
	delete k;
}
