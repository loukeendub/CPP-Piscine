/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loukeen <loukeen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:28:34 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/08 23:23:30 by loukeen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	~AMateria();
	AMateria(const AMateria& copy);
	AMateria(std::string const & type);
	AMateria& operator = (const AMateria& op);

	std::string const  & getType(); // returns the materia type

	virtual AMateria*   clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif