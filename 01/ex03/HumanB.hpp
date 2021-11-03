/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:36:37 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 09:56:46 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

//	INCLUDES
# include <iostream>
# include "Weapon.hpp"

//	CLASS
class HumanB
{
private:
	Weapon	_weaponB;
	std::string	__nameB;
public:
	HumanB(std:string name);
	~HumanB();

	void	attackB();
	void	setWeapon();
};

#endif
