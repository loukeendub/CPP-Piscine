/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:24:31 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/06 23:08:05 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain*	catBrain;
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat&	operator = (const Cat &op);

		void	makeSound()	const;
		Brain	*getBrain();
};

#endif
