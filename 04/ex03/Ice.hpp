/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:40:06 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/08 05:16:05 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"


class Ice
{
protected:
	std::string	type;
public:
	Ice();
	~Ice();
	Ice(const Ice& copy);
	Ice&			operator = (const Ice& op);

	Ice*			clone();
	virtual void	use(ICharacter& target);
};

#endif