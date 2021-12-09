/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:44:52 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/08 05:01:06 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure
{
protected:
	std::string	type;
public:
	Cure();
	~Cure();
	Cure(const Cure& copy);
	Cure&	operator = (const Cure& op);

	Cure*	clone();
};

#endif