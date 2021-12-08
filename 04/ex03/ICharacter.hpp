/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:58:42 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/08 05:13:23 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter
{

public:
	virtual	~ICharacter();
	virtual std::string cost & getName() const = 0;
	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void use	(int idx, ICharacter& target) = 0;

	
};

ICharacter::ICharacter(/* args */)
{
}

ICharacter::I~Character()
{
}


#endif
