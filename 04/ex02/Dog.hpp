/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:23:11 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/06 23:09:02 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain*	dogBrain;
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog&	operator = (const Dog &op);

		void	makeSound()	const;
		Brain*	getBrain();
};

#endif