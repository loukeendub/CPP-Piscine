/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:33:30 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 09:11:47 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

//	INCLUDES
# include <iostream>

//	CLASS
class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std:string type);
	~Weapon();

	std::string& const	getType();
	void			setType(std::string type);	
};

#endif
