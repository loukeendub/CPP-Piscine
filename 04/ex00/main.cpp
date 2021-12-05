/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:14:44 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/05 04:00:35 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>


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
}