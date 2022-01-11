/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:53:26 by lmarzano          #+#    #+#             */
/*   Updated: 2022/01/11 10:53:27 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* p)
{
	uintptr_t	intp;

	intp = reinterpret_cast<uintptr_t>(p);
	return (intp);
}

Data*	deserialize(uintptr_t raw)
{
	Data*	p;
	p = reinterpret_cast<Data*>(raw);
	return (p);
}
