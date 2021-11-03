/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:15 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 09:12:31 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

//	INCLUDES
# include <iostream>
# include "Weapon.hpp"

//	CLASS
class HumanA
{
private:
	Weapon	_weaponA;
	std::string	__nameA;
public:
	HumanA(std::string name, std:string type);
	~HumanA();

	void	attackA();//	displays "NAME attacks with his WEAPON_TYPE"
};

#endif
